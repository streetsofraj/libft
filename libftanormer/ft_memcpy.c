/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msandana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:59:48 by msandana          #+#    #+#             */
/*   Updated: 2021/03/29 18:23:56 by msandana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*pdst;
	const char	*psrc;

	pdst = (char*)dst;
	psrc = (const char*)src;
	if ((pdst == NULL) && (psrc == NULL))
		return (NULL);
	while (n--)
		*pdst++ = *psrc++;
	return (dst);
}
