/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fujitaharuki <fujitaharuki@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 11:53:41 by fujitaharuk       #+#    #+#             */
/*   Updated: 2024/04/07 23:32:20 by fujitaharuk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strdup(const char *str)
{
	char	*dest;
	int		i;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	i = -1;
	while (str[++i])
		dest[i] = str[i];
	dest[i] = '\0';
	return (dest);
}