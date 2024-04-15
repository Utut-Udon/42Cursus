/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfujita <hfujita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 04:50:26 by fujitaharuk       #+#    #+#             */
/*   Updated: 2024/04/15 22:07:39 by hfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;
	void	*ini;
	size_t	mem_buf;

	mem_buf = size * count;
	mem = (void *)malloc(mem_buf);
	if (!mem)
		return (NULL);
	ini = mem;
	while (mem_buf-- > 0)
	{
		mem = 0;
		mem++;
	}
	return (ini);
}
