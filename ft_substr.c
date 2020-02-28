/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <skang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 21:18:27 by skang             #+#    #+#             */
/*   Updated: 2020/02/28 22:11:43 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	cnt;
	char *str;
	char *res;

	cnt = 0;
	if((str = (char*)malloc(sizeof(char) * len)) == '\0')
		return (NULL);
	while (start-- > 0)
		s++;
	res = str;
	while (cnt++ < len)
	{
		*str = *s;
		s++;
		str++;
	}
	return (res);
}
