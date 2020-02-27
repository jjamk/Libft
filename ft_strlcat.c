/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <skang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 16:24:31 by skang             #+#    #+#             */
/*   Updated: 2020/02/27 17:15:38 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int dstsize)
{
	unsigned int i;
	unsigned int dlen;

	dlen = 0;
	i = 0;
	while (dst[dlen] != '\0')
		dlen++;
	while (src[i] != '\0' && i + dlen + 1 < dstsize)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	if (sizeof(dst) < dstsize)
		return (dlen + i);
	return (dstsize);
}
