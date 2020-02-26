/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 16:31:34 by tpokalch          #+#    #+#             */
/*   Updated: 2018/10/25 21:24:26 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
	{
		ft_putchar(*(str + i));
		i++;
	}
}

void	ft_putarr(char **arr)
{
	int i;

	i = 0;
	while (*(arr + i))
	{
		ft_putstr(*(arr + i));
		ft_putstr("\n");
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) && *(s2 + i))
	{
		if (*(s1 + i) == *(s2 + i))
			i++;
		else
			return (*(s1 + i) - *(s2 + i));
	}
	if (*(s1 + i))
		return (1);
	else if (*(s2 + i))
		return (-1);
	return (0);
}

int		is_ordered(char **arr)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*(arr + j + 1))
	{
		if (ft_strcmp(*(arr + j), *(arr + j + 1)) <= 0)
			j++;
		else
			return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	char	*c;
	int		i;

	i = 1;
	if (argc < 2)
		return (0);
	while (is_ordered(argv + 1) == 1)
	{
		i = 1;
		while (is_ordered(argv + 1) == 1 && *(argv + i + 1))
		{
			if (ft_strcmp(*(argv + i), *(argv + i + 1)) > 0)
			{
				c = *(argv + i);
				*(argv + i) = *(argv + i + 1);
				*(argv + i + 1) = c;
			}
			i++;
		}
	}
	ft_putarr(argv + 1);
	return (0);
}
