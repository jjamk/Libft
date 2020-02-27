/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skang <skang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 20:05:05 by skang             #+#    #+#             */
/*   Updated: 2020/02/27 20:22:43 by skang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	char* str1;
	char* str2;

	if (n == 0)
		return (0);
	if (!*s1 || !*s2)
	{
		str1 = (char*)s1;
		str2 = (char*)s2;
		return (*str1 - *str2);
	}
	while (n-- > 0 && (*s2 || *s1))
	{
		str1 = (char*)s1;
		str2 = (char*)s2;
		if (*s1 != *s2)
			return (*str1 - *str2);
		s1++;
		s2++;
	}
	return (0);
}
