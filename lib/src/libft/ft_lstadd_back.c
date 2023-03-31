/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:52:41 by paumarc2          #+#    #+#             */
/*   Updated: 2022/12/08 11:04:49 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tempo;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			tempo = ft_lstlast(*(lst));
			tempo->next = new;
		}
	}
}
