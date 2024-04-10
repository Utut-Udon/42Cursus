/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fujitaharuki <fujitaharuki@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 08:06:08 by fujitaharuk       #+#    #+#             */
/*   Updated: 2024/04/10 18:02:35 by fujitaharuk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		len;
	char	*dst;

	if (!s)
		return (NULL);
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	if (*s == '\0')
		return (ft_strnew(0));
	len = ft_strlen(s);
	while (len > 0
		&& (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n'))
		len--;
	dst = ft_strnew(len);
	if (!dst)
		return (NULL);
	dst = ft_strncpy(dst, s, len);
	return (dst);
}
