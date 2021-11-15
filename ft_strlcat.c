/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbayard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:12:16 by bbayard           #+#    #+#             */
/*   Updated: 2021/10/22 12:12:20 by bbayard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	v;
	size_t	i;
	size_t	len;

	if (size == 0)
		return (ft_strlen(src));
	else if (size < ft_strlen(dst))
		v = size + ft_strlen(src);
	else
		v = ft_strlen(src) + ft_strlen(dst);
	i = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	len = i;
	while (src[i - len] && i + 1 < size)
	{
		dst[i] = src[i - len];
		i++;
	}
	if (len < size)
		dst[i] = '\0';
	return (v);
}
