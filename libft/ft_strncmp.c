/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fujitaharuki <fujitaharuki@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:08:42 by fujitaharuk       #+#    #+#             */
/*   Updated: 2024/04/10 05:57:17 by fujitaharuk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n-- > 0 && *s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	rreturn (*(unsigned char *)s1 - *(unsigned char *)s2);
}
