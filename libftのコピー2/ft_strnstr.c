/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfujita <hfujita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:59:59 by fujitaharuk       #+#    #+#             */
/*   Updated: 2024/04/15 23:39:44 by hfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;

	if (len == 0)
	{
		if (!(*haystack))
			return ((char *)haystack);
		else
			return (NULL);
	}
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
