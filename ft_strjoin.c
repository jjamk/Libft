/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <skang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 22:56:24 by skang             #+#    #+#             */
/*   Updated: 2020/04/24 19:28:46 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *res;
	char *a;

	if ((a = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)))) == 0)
		return (NULL);
	res = a;
	while (*s1)
	{
		*a = *s1;
		s1++;
		a++;
	}
	while (*s2)
	{
		*a = *s2;
		a++;
		s2++;
	}
	return (res);
}
