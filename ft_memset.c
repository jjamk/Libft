/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <skang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 21:10:05 by skang             #+#    #+#             */
/*   Updated: 2020/02/26 22:14:30 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, unsigned int len)
{
	int		i;
	unsigned char 	*str;

	str = (unsigned char*)b;
	while(len > 0)
	{
		str[i] = c;
		len--;
	}
	return (b);
}
