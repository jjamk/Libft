/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <skang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 01:02:32 by skang             #+#    #+#             */
/*   Updated: 2020/03/03 01:27:19 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *res;
	unsigned int i;

	i = 0;
	if(!(res = malloc(sizeof(char) * ft_strlen(s) + 1)) || !f)
		return (NULL);
	while (*s)
	{
		*res = *s;
		res++;
		s++;
	}
	while (res[i])
	{
		res[i] = (*f)(i, res[i]);
		i++;
	}
	return (res);
}
