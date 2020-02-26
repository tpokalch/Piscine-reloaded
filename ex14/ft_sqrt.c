/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 15:42:28 by tpokalch          #+#    #+#             */
/*   Updated: 2018/10/27 16:56:56 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb)
	{
		if (nb * nb > 2147483647)
			return (0);
		while (i <= nb && i * i != 0)
		{
			if (nb / (i * i) == 1 && nb % (i * i) == 0)
				return (i);
			i++;
		}
	}
	return (0);
}
