/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <skang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 19:05:17 by skang             #+#    #+#             */
/*   Updated: 2020/03/03 00:01:43 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int i;

	i = 0;
	if (n < 0)
		n *= -1;
	while (n > 10)
	{
		n = n / 10;
		i++;
	}
	i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char *str;
	int num;
	int i;

	num = 1;
	i = ft_len(n);
	while (i-- > 1)
		num *= 10;
	if (!(str = (char*)malloc(sizeof(char) * ft_len(n) + 1)))
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
		i = 1;
	}
	while (num > 1)
	{
		str[i++] = (n / num) + '0';
		n %= num;
		num /= 10; 
	}
	str[i++] = n + '0';
	str[i] = '\0';
	
	return (str);
}
