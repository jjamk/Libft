/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <skang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 01:36:49 by skang             #+#    #+#             */
/*   Updated: 2020/05/02 01:43:45 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dstr;
	unsigned char		*sstr;
	size_t			i;

	i = 0;
	dstr = (unsigned char*)dst;
	sstr = (unsigned char*)src;
	while (i < n)
	{
		dstr[i] = sstr[i];
		if (dstr[i] == (unsigned char)c)
			return ((void*)(dst + i + 1));
		++i;
	}
	return ((void*)'\0');
}
