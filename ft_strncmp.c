/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <skang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 20:05:05 by skang             #+#    #+#             */
/*   Updated: 2020/04/12 03:32:42 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (*s1 && *s2 && i < n)
	{
		if (*s1 != *s2)
			return ((*(unsigned char*)s1 - *(unsigned char*)s2));
		++s1;
		++s2;
		++i;
	}
	if (i == n)
	{
		s1--;
		s2--;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}
