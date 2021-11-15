/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbayard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:05:51 by bbayard           #+#    #+#             */
/*   Updated: 2021/10/22 12:05:56 by bbayard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_symb_num(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n / 10 >= 1)
	{
		count++;
		n = n / 10;
	}
	count++;
	return (count);
}

int	count_numeric(int i)
{
	int	done;

	done = 1;
	while (i > 0)
	{
		done *= 10;
		i--;
	}
	return (done);
}

char	*ft_itoa(int n)
{
	char	*str_num;
	int		num_count;
	int		i;
	long	nbr;

	i = 0;
	nbr = n;
	num_count = len_symb_num(nbr);
	str_num = (char *)malloc(sizeof(char) * (num_count + 1));
	if (!str_num)
		return (NULL);
	if (nbr < 0)
	{
		str_num[i++] = '-';
		nbr *= -1;
		num_count--;
	}
	while (num_count > 0)
	{
		str_num[i++] = (nbr / count_numeric(num_count - 1)) + '0';
		nbr = nbr % count_numeric(num_count - 1);
		num_count--;
	}
	str_num[i] = '\0';
	return (str_num);
}
