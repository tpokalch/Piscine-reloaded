/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 20:12:52 by tpokalch          #+#    #+#             */
/*   Updated: 2018/10/27 16:07:43 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *arr;

	i = 0;
	if (max <= min)
		return (NULL);
	if (!(arr = (int *)malloc(sizeof(*arr) * (max - min))))
		return (NULL);
	while (min + i < max)
	{
		*(arr + i) = i + min;
		i++;
	}
	return (arr);
}
