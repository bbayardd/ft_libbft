/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbayard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:02:29 by bbayard           #+#    #+#             */
/*   Updated: 2021/10/22 12:02:34 by bbayard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*buf;

	buf = NULL;
	buf = (void *)malloc(size * nmemb);
	if (!buf)
		return (0);
	ft_bzero(buf, size * nmemb);
	return (buf);
}
