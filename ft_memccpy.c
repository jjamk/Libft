/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <skang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 01:36:49 by skang             #+#    #+#             */
/*   Updated: 2020/02/27 01:54:21 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dst, const void *src, int c, unsigned int n)
{
	unsigned char		*dstr;
	unsigned char		*sstr;
	int			i;

	i = 0;
	dstr = (unsigned char*)dst;
	sstr = (unsigned char*)src;
	while (n > 0)
	{
		if (sstr[i] == c)
		{
			dstr[i] = sstr[i];
			return (dst + i + 1);
		}
		dstr[i] = sstr[i];
		i++;
		n--;
	}
	return ((void*)'\0');
}