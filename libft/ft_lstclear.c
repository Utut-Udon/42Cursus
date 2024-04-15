/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fujitaharuki <fujitaharuki@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:17:00 by fujitaharuk       #+#    #+#             */
/*   Updated: 2024/04/15 21:30:25 by fujitaharuk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	if(!*lst && !del)
		return ;
	while((*lst))
	{
		ptr = (*lst)->next;
		del((*lst)->content);
		free(lst);
		*lst = ptr;
	}
}
