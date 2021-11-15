/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbayard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:16:05 by bbayard           #+#    #+#             */
/*   Updated: 2021/10/22 12:16:12 by bbayard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new_s;
	size_t			c;

	c = 0;
	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - (size_t)start)
		len = ft_strlen(s) - (size_t)start;
	new_s = (char *)malloc(len + 1);
	if (!new_s)
		return (NULL);
	while (s[c] && c < len)
	{
		new_s[c] = s[(size_t)start + c];
		c++;
	}
	new_s[c] = '\0';
	return (new_s);
}
