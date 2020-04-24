/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <skang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 22:54:25 by skang             #+#    #+#             */
/*   Updated: 2020/04/24 19:31:25 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dstr;
	const unsigned char	*sstr;

	i = 0;
	dstr = (unsigned char*)dst;
	sstr = (unsigned char*)src;
	if (sstr < dstr)
	{
		while (++i <= len)
			dstr[len - i] = sstr[len - i];
	}
	else
	{
		while (len-- > 0)
		{
			*(dstr++) = *(sstr++);
		}
	}
	return (dst);
}
