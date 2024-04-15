/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfujita <hfujita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 03:28:18 by fujitaharuk       #+#    #+#             */
/*   Updated: 2024/04/15 22:09:55 by hfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	max_size;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	max_size = dstsize - dst_len - 1;
	dst += dst_len;
	while (max_size-- > 0 && *src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (dst_len + src_len);
}
