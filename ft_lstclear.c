/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbayard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 11:51:17 by bbayard           #+#    #+#             */
/*   Updated: 2021/10/27 11:51:19 by bbayard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*strt;
	t_list	*tmp;

	strt = *lst;
	while (strt)
	{
		tmp = strt->next;
		ft_lstdelone(strt, del);
		strt = tmp;
	}
	*lst = NULL;
}
