/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <skang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:40:33 by skang             #+#    #+#             */
/*   Updated: 2020/04/18 15:53:34 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;

	if (len == 0)
		return (0);
	if (!*needle)
		return ((char*)haystack);
	nlen = ft_strlen(needle);
	while (*haystack && len-- >= nlen)
	{
		if (*haystack == *needle && \
				ft_strncmp(haystack, needle, nlen) == 0)
			return ((char*)haystack);
		haystack++;
	}
	return (0);
}
