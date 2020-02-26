/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 16:49:23 by tpokalch          #+#    #+#             */
/*   Updated: 2018/10/25 20:35:30 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (*(str + i) != '\0')
	{
		ft_putchar(*(str + i));
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		fd1;
	char	str[99999];
	int		i;

	i = 0;
	if (argc == 1)
	{
		ft_putstr("File name missing.");
		ft_putchar('\n');
		return (0);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.");
		ft_putchar('\n');
		return (0);
	}
	fd1 = open(*(argv + 1), O_RDONLY);
	while (read(fd1, str + i, 1) == 1)
		i++;
	close(fd1);
	*(str + i) = '\0';
	ft_putstr(str);
	return (0);
}
