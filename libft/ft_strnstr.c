/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fujitaharuki <fujitaharuki@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:59:59 by fujitaharuk       #+#    #+#             */
/*   Updated: 2024/04/10 04:26:43 by fujitaharuk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;

	if (len == 0)
		return (NULL);
	if (!(*needle))
		return ((char *)haystack);
	while (*haystack && len-- > 0)
	{
		i = 0;
		while (haystack[i] == needle[i] && haystack[i] && needle[i])
			i++;
		if (!(needle[i]))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
