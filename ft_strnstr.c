/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <skang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:40:33 by skang             #+#    #+#             */
/*   Updated: 2020/05/03 17:25:02 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*a;
	char	*b;
	size_t	len_neddle;

	if (!*needle)
		return ((char*)haystack);
	len_neddle = ft_strlen(needle);
	if (!ft_strlen(haystack) || len < len_neddle)
		return (0);
	len -= --len_neddle;
	while (len-- && *haystack)
	{
		a = (char*)haystack;
		b = (char*)needle;
		while (*b && *a == *b)
		{
			++a;
			++b;
		}
		if (*b == 0)
			return ((char*)haystack);
		++haystack;
	}
	return (0);
}
