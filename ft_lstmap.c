/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <skang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 16:15:11 by skang             #+#    #+#             */
/*   Updated: 2020/04/24 19:35:06 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *list;
	t_list *tmp;
	t_list *res;

	tmp = NULL;
	if (!lst || !f)
		return (NULL);
	if (!(list = ft_lstnew((*f)(lst->content))))
		return (NULL);
	tmp = list;
	res = lst->next;
	while (res)
	{
		if (!(tmp->next = ft_lstnew((*f)(res->content))))
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		tmp = tmp->next;
		res = res->next;
	}
	return (list);
}
