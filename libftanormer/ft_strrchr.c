/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msandana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 16:55:37 by msandana          #+#    #+#             */
/*   Updated: 2021/03/02 16:56:41 by msandana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *rstr;

	rstr = NULL;
	while (*s)
	{
		if (*s == (char)c)
			rstr = (char *)s;
		s++;
	}
	if (*s == (char)c)
		rstr = (char*)s;
	return (rstr);
}
