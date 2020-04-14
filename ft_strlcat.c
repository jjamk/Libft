/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <skang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 16:24:31 by skang             #+#    #+#             */
/*   Updated: 2020/04/12 02:29:12 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	i = 0;
	if (dstsize == 0)
		return (slen);
	if (dstsize < dlen)
		slen += dstsize;
	else
		slen += dlen;
	while (*src != 0 && dlen + 1 < dstsize)
	{
		*(dst + dlen) = *src;
		dlen++;
		src++;
	}
	*(dst + dlen) = '\0';
	return (slen);
}
