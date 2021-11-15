/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbayard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:01:19 by bbayard           #+#    #+#             */
/*   Updated: 2021/10/22 12:01:29 by bbayard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	int		num;
	long	l_num;

	sign = 1;
	num = 0;
	l_num = 0;
	if (!*str)
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + (*str - '0') * sign;
		l_num = (l_num * 10) + (*str++ - '0') * sign;
		if (sign > 0 && l_num < 0)
			return (-1);
		else if (sign < 0 && l_num > 0)
			return (0);
	}
	return (num);
}
