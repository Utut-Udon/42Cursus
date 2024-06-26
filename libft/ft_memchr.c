/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fujitaharuki <fujitaharuki@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 00:52:20 by fujitaharuk       #+#    #+#             */
/*   Updated: 2024/04/10 04:25:58 by fujitaharuk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*uc_s;
	unsigned char	uc_c;
	int				flag;

	uc_s = (unsigned char *)s;
	uc_c = (unsigned char)c;
	flag = 0;
	while (n-- > 0 && flag == 0)
	{
		if (uc_c == *uc_s)
			flag = 1;
		uc_s++;
	}
	if (flag == 1)
		return (uc_s);
	else
		return (NULL);
}
