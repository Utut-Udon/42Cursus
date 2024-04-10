/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fujitaharuki <fujitaharuki@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 05:41:00 by fujitaharuk       #+#    #+#             */
/*   Updated: 2024/04/10 06:00:35 by fujitaharuk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*map;
	unsigned int	idx;

	map = malloc(ft_strlen(s) + 1);
	if (!map)
		return (NULL);
	idx = 0;
	if (s && f)
	{
		while (s[idx])
		{
			map[idx] = f(s[idx]);
			idx++;
		}
	}
	map[idx] = '\0';
	return (map);
}