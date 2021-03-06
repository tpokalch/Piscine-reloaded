/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 16:03:42 by tpokalch          #+#    #+#             */
/*   Updated: 2018/10/25 16:29:49 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
