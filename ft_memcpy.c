/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <skang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 22:15:57 by skang             #+#    #+#             */
/*   Updated: 2020/05/02 01:38:29 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dstr;
	unsigned char	*sstr;

	dstr = (unsigned char*)dst;
	sstr = (unsigned char*)src;
	if (!n || dst == src)
		return (dst);
	while (n > 0)
	{
		*dstr++ = *sstr++;
		n--;
	}
	return (dst);
}
