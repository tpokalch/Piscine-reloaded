/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 16:10:49 by tpokalch          #+#    #+#             */
/*   Updated: 2018/10/25 21:49:02 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	argc = 0;
	while (*(argv + i + 1))
	{
		ft_putstr((*(argv + i + 1)));
		ft_putchar('\n');
		i++;
	}
	return (0);
}
