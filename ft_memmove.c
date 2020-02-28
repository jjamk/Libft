/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <skang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 22:54:25 by skang             #+#    #+#             */
/*   Updated: 2020/02/28 18:31:28 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char		*dstr;
	const unsigned char	*sstr;

	i = -1;
	dstr = (unsigned char*)dst;
	sstr = (unsigned char*)src;
	if (dst <= src)
	{
		while (++i < len)
			dstr[i] = sstr[i];
	}
	else
	{
		i = len + 1;
		while (len-- > 0)
		{
			dstr[i] = sstr[i];
			i--;
		}
	}
	return (dst);
}
