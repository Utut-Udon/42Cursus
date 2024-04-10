/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fujitaharuki <fujitaharuki@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 05:06:49 by fujitaharuk       #+#    #+#             */
/*   Updated: 2024/04/10 15:52:00 by fujitaharuk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*newstr;
	char	*ini;

	newstr = (char *)malloc(size + 1);
	if (!newstr)
		return (NULL);
	ini = newstr;
	while (size-- > 0)
	{
		*newstr = '\0';
		newstr++;
	}
	*newstr = '\0';
	return (ini);
}