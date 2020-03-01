/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <skang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 14:08:12 by skang             #+#    #+#             */
/*   Updated: 2020/02/29 23:07:46 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char *a;
	int cnt;
	int i;

	cnt = 0;
	while (*s1 && *set)
	{
		if (*s1 == *set)
		{
			s1++;
			cnt++;
			continue ;
		}
		if (*s1 != *set && *(set + 1) == '\0')
			break ;
		set++;
	}
	a = malloc(sizeof(char)
