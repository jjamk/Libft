/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <skang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 15:07:23 by skang             #+#    #+#             */
/*   Updated: 2020/02/28 18:32:03 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	int			i;

	str = (const unsigned char*)s;
	i = 0;
	while (n-- > 0)
	{
		if (str[i] == c)
			return ((void*)s + i);
		i++;
	}
	return ((void*)'\0');
}
