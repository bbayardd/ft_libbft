/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbayard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:25:59 by bbayard           #+#    #+#             */
/*   Updated: 2021/10/27 12:26:02 by bbayard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*suc_iter;
	t_list	*tmp;

	suc_iter = NULL;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&suc_iter, del);
			return (NULL);
		}
		ft_lstadd_back(&suc_iter, tmp);
		lst = lst->next;
	}
	return (suc_iter);
}
