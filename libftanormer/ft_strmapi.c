/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msandana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 11:28:27 by msandana          #+#    #+#             */
/*   Updated: 2021/03/05 11:28:44 by msandana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	len;
	int		i;

	if (!(s))
		return (NULL);
	len = ft_strlen((char*)s);
	i = 0;
	if (!(new = (char*)malloc(sizeof(*new) * (len + 1))))
		return (NULL);
	new[len] = '\0';
	while (s[i] != '\0')
	{
		new[i] = f(i, s[i]);
		i++;
	}
	return (new);
}
