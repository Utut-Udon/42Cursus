/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fujitaharuki <fujitaharuki@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 06:15:02 by fujitaharuk       #+#    #+#             */
/*   Updated: 2024/04/10 17:26:43 by fujitaharuk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*ini;

	s += start;
	substr = ft_strnew(len);
	if (!substr)
		return (NULL);
	ini = substr;
	while (len-- > 0)
	{
		*substr = *s;
		substr++;
		s++;
	}
	return (ini);
}
