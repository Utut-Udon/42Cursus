/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fujitaharuki <fujitaharuki@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 04:50:26 by fujitaharuk       #+#    #+#             */
/*   Updated: 2024/04/10 05:08:39 by fujitaharuk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;
	void	*ini;

	mem = (void *)malloc(size);
	if (!mem)
		return (NULL);
	ini = mem;
	while (size-- > 0)
	{
		mem = 0;
		mem++;
	}
	return (ini);
}