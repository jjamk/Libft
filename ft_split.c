/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <skang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:43:58 by skang             #+#    #+#             */
/*   Updated: 2020/05/01 23:39:50 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_slen(char const *s, char c)
{
	int a;
	int b;

	a = 0;
	b = 0;
	if (!*s)
		return (0);
	while (*s != '\0')
	{
		if (*s == c)
			b = 0;
		else if (b == 0)
		{
			b = 1;
			a++;
		}
		s++;
	}
	return (a);
}

static int			ft_clen(char const *s, char c, int i)
{
	int len;

	len = 0;
	while (s[i] != c && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

static char			**ft_free(char const **str, int b)
{
	while (b > 0)
	{
		b--;
		free((void*)str[b]);
		str[b] = NULL;
	}
	free(str);
	str = NULL;

	// 댕글링포인터
	return (0);
}

static char			**split(char const *s, char **str, char c, int i)
{
	int	a;
	int	b;
	int	d;

	a = 0;
	b = 0;
	while (s[a] && b < i)
	{
		d = 0;
		while (s[a] == c)
			a++;
		str[b] = (char*)malloc(sizeof(char) * ft_clen(s, c, a) + 1);
		if (!str[b])
			return (ft_free((char const **)str, b));
		while (s[a] && s[a] != c)
			str[b][d++] = s[a++];
		str[b][d] = '\0';
		b++;
	}
	str[b] = 0;
	return (str);
}

char				**ft_split(char const *s, char c)
{
	char	**str;
	int		i;

	if (!s)
		return (0);
	i = ft_slen(s, c);
	if (!(str = (char**)malloc(sizeof(char*) * (i + 1))))
		return (0);
	return (split(s, str, c, i));
}
