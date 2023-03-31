/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:57:01 by paumarc2          #+#    #+#             */
/*   Updated: 2022/12/13 14:39:21 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_sct;

	if (!lst || !f)
		return (NULL);
	new_sct = ft_lstnew(f(lst->content));
	if (!new_sct)
		return (NULL);
	new_lst = new_sct;
	lst = lst->next;
	while (lst)
	{
		new_sct = ft_lstnew(f(lst->content));
		if (!new_sct)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&new_lst, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&new_lst, new_sct);
	}
	return (new_lst);
}
