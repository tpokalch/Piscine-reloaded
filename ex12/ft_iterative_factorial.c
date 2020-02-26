/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 21:10:14 by tpokalch          #+#    #+#             */
/*   Updated: 2018/10/27 17:31:05 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int c;

	c = nb - 1;
	if (nb > 12)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (c > 0)
	{
		nb = nb * c;
		c--;
	}
	return (nb);
}
