/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <skang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 21:56:04 by skang             #+#    #+#             */
/*   Updated: 2020/02/28 18:28:22 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char		*str;
	int			i;

	i = 0;
	str = (unsigned char*)s;
	if (n == 0)
		return ;
	while(n > 0)
	{
		str[i] = 0;
		n--;
		i++;
	}
	return (s);
}
