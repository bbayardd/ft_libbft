/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbayard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:14:46 by bbayard           #+#    #+#             */
/*   Updated: 2021/10/22 12:14:55 by bbayard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t		pos;

	if (*to_find == '\0')
		return ((char *)str);
	pos = ft_strlen((char *)to_find);
	while (*str != '\0' && len-- >= pos)
	{
		if (*str == *to_find && ft_memcmp(str, to_find, pos) == 0)
			return ((char *)str);
		str++;
	}
	return (0);
}
