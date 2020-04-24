/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <skang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 14:08:12 by skang             #+#    #+#             */
/*   Updated: 2020/04/24 19:26:32 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_set(char a, char const *set)
{
	while (*set)
		if (a == *set++)
			return (1);
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*begin;
	char	*end;
	char	*str;
	size_t	len;

	begin = (char*)s1;
	end = begin + ft_strlen(s1);
	while (*begin && ft_set(*begin, set))
		begin++;
	while (begin < end && ft_set(*(end - 1), set))
		end--;
	len = end - begin + 1;
	if (!(str = malloc(len)))
		return (NULL);
	ft_strlcpy(str, begin, len);
	return (str);
}
