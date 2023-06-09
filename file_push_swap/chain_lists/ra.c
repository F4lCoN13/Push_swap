/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:01:05 by paumarc2          #+#    #+#             */
/*   Updated: 2023/05/05 14:06:39 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/headerpush_swap.h"

int	ft_ra(t_chain **head, t_chain **tail)
{
	t_chain *tmp;
	
	if ((*head) && ((*head) != (*tail)))
	{
		tmp = (*head);
		ft_delete_first(&*head, (&*tail));
		tmp->next = NULL;
		tmp->prev = (*tail);
		(*tail)->next = tmp;
		(*tail) = tmp;
	}
	return (0);
}
