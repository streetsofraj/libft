/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msandana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 17:11:28 by msandana          #+#    #+#             */
/*   Updated: 2021/03/02 17:16:07 by msandana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	char	*j;
	char	*k;

	if (!*s2)
		return ((char *)s1);
	while (len-- && *s1)
	{
		if (*s1 == *s2)
		{
			i = len;
			j = (char *)s1 + 1;
			k = (char *)s2 + 1;
			while (i-- && *j && *k && *j == *k)
			{
				++j;
				++k;
			}
			if (!*k)
				return ((char *)s1);
		}
		++s1;
	}
	return (NULL);
}
