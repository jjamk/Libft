/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <skang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 18:37:34 by skang             #+#    #+#             */
/*   Updated: 2020/04/10 20:25:14 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wlen(char const *str, char c)
{
	int	num;

	num = 0;
	if (*str != c && *str)
	{
		str++;
		num++;
	}
	while(*str)
	{
		while (*str == c)
		{
			str++;
			if (*str != c && *str)
				num++;
		}
		str++;
	}
	return (num);
}

static int	ft_slen(char const *str, char c)
{
	int cnt;

	cnt = 0;
	while (*str != c && *str)
	{
		cnt++;
		str++;
	}
	return (cnt);
}

static void	ft_free(char **res)
{
	int i;

	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
}

char		**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	char	**res;

	i = 0;
	j = 0;
	if (!(s && (res = (char **)malloc(sizeof(char *) \
					* (ft_wlen(s, c) + 1)))))
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			if (!(res[i] = \
		(char *)malloc(sizeof(char) * (ft_slen(s, c) + 1))))
			{
				ft_free(res);
				return (NULL);
			}
			while (*s && *s != c)
				res[i][j++] = '\0';
			i++;
			j = 0;
		}
	}
	res[i] = 0;
	return (res);
}
