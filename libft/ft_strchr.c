/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fujitaharuki <fujitaharuki@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:17:57 by fujitaharuk       #+#    #+#             */
/*   Updated: 2024/04/08 00:50:22 by fujitaharuk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	c_c;

	c_c = (char)c;
	while (*s)
	{
		if (*s == c_c)
			return (s);
		s++;
	}
	if (c_c == 0)
		return (s);
	return (NULL);
}