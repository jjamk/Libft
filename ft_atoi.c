/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <skang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 20:25:17 by skang             #+#    #+#             */
/*   Updated: 2020/02/27 21:15:49 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int flag;
	int num;

	flag = 0;
	num = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' \
			|| *str == '\r' || *str == ' ')
		str++;
	if (*str != '+' && *str != '-' && *str < '0' && *str > '9')
		return (0);
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			flag = 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num *= 10;
		num += *str - '0';
		str++;
	}
	if (flag)
		return (-num);
	return (num);
}
