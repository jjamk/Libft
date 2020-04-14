/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <skang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 15:23:59 by skang             #+#    #+#             */
/*   Updated: 2020/04/10 22:22:47 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list *list;

	list = lst;
	if (!lst)
		return (NULL);
	while (list)
	{
		if (list -> next == NULL)
			return (list);
		list = list -> next;
	}
	return (list);
}
