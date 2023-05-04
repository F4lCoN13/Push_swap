/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:01:05 by paumarc2          #+#    #+#             */
/*   Updated: 2023/05/04 15:17:20 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/headerpush_swap.h"

int	ft_ra(t_chain **head, t_chain **tail)
{
	t_chain *tmp;
	
	ft_printf("je suis out");
	if ((*head) && ((*head) != (*tail)))
	{
		ft_printf("je suis dedans");
		tmp = (*head);
		ft_delete_first(&*head);
		tmp->next = NULL;
		tmp->prev = (*tail);
		(*tail)->next = tmp;
		(*tail) = tmp;
	}
	return (0);
}
