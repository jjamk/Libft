/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <skang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 16:15:11 by skang             #+#    #+#             */
/*   Updated: 2020/03/03 18:27:05 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *list;
	t_list *tmp;
	t_list *res;

	if(!lst || !f)
		return (NULL);
	list = (*f)(lst);
	res = tmp;
	lst = lst -> next;
	while (lst)
	{
		if (!(res -> next = ft_lstnew(list -> content)))
		{
			while (tmp)
			{
				(*del)(tmp -> content);
				tmp = tmp -> next;
			}
			free(tmp);
			return (NULL);
		}
		lst = lst -> next;
		res = res -> next;
	}
	return (tmp);
}
