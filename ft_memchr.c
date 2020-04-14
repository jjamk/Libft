/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <skang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 15:07:23 by skang             #+#    #+#             */
/*   Updated: 2020/04/10 21:41:02 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t			i;

	str = (const unsigned char*)s;
	i = 0;
	if (n <= 0)
		return ((void*)'\0');
	while (n-- > 0)
	{
		if (str[i] == (unsigned char)c)
			return ((void*)&str[i]);
		i++;
	}
	return ((void*)'\0');
}
