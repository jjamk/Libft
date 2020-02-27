/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <skang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 22:54:25 by skang             #+#    #+#             */
/*   Updated: 2020/02/27 01:33:07 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, unsigned int len)
{
	int			i;
	unsigned char		*dstr;
	const unsigned char	*sstr;

	i = -1;
	dstr = (unsigned char*)dst;
	sstr = (unsigned char*)src;
	if (dst <= src)
	{
		while (++i < len)
			dstr[i] = sstr[i];
	}
	else
	{
		i = len + 1;
		while (len-- > 0)
		{
			dstr[i] = sstr[i];
			i--;
		}
	}
	return (dst);
}
