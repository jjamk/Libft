/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <skang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:40:33 by skang             #+#    #+#             */
/*   Updated: 2020/02/27 20:04:45 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
	char *hstr;
	char *nstr;

	if (*needle == 0)
		return ((char*)haystack);
	while (len-- > 0 && *haystack != '\0')
	{
		hstr = (char*)haystack;
		nstr = (char*)needle;
		while (*nstr != '\0' && *hstr == *nstr)
		{
			nstr++;
			hstr++;
		}
		if (*nstr == '\0')
			return ((char*)haystack);
		haystack++;
	}
	return (0);
}