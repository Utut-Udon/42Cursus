/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fujitaharuki <fujitaharuki@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 06:26:37 by fujitaharuk       #+#    #+#             */
/*   Updated: 2024/04/10 08:05:54 by fujitaharuk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*dst;

	len = ft_strlen(s1) + ft_strlen(s2);
	dst = ft_strnew(len);
	dst = ft_strcpy(dst, s1);
	dst = ft_strcat(dst, s2);
	return (dst);
}
