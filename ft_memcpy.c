/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <skang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 22:15:57 by skang             #+#    #+#             */
/*   Updated: 2020/04/24 19:31:44 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dstr;
	unsigned char	*sstr;

	dstr = (unsigned char*)dst;
	sstr = (unsigned char*)src;
	i = 0;
	while (i < n && dstr[i] != '\0')
	{
		dstr[i] = sstr[i];
		i++;
	}
	return (dst);
}
