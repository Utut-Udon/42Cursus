/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfujita <hfujita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:17:00 by fujitaharuk       #+#    #+#             */
/*   Updated: 2024/04/15 22:08:15 by hfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	if (!*lst && !del)
		return ;
	while ((*lst))
	{
		ptr = (*lst)->next;
		del((*lst)->content);
		free(lst);
		*lst = ptr;
	}
}
