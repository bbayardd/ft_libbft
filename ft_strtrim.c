/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbayard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:15:34 by bbayard           #+#    #+#             */
/*   Updated: 2021/10/22 12:15:39 by bbayard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	s1_length;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	s1_length = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[s1_length]) && s1_length != 0)
		s1_length--;
	return (ft_substr((char *)s1, i, s1_length + 1));
}
