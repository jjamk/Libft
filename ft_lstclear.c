/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <skang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 15:56:23 by skang             #+#    #+#             */
/*   Updated: 2020/04/24 19:39:27 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *list;

	if (!del)
		return ;
	while (*lst)
	{
		(*del)((*lst)->content);
		list = *lst;
		*lst = list->next;
		free(list);
	}
	*lst = NULL;
}
