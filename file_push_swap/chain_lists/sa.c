/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:47:24 by paumarc2          #+#    #+#             */
/*   Updated: 2023/05/04 12:02:13 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/headerpush_swap.h"

////////////////////////////////////////////////////////////////////////////////
///////////////FR: Fonctions qui intervertis head et tail///////////////////////
//////////////////EN: Functions that swap head and tail/////////////////////////
////////////////////////////////////////////////////////////////////////////////
void	ft_2_sa(t_chain **head, t_chain **tail)
{
	t_chain *tmp;

	tmp = *tail;
    *tail = (*tail)->prev;
    (*tail)->next = NULL;
    tmp->prev = NULL;
    tmp->next = *head;
    (*head)->prev = tmp;
    *head = tmp;
}

////////////////////////////////////////////////////////////////////////////////
////////FR: Fonction qui intervertis les 2 premiers maillons d'une pile/////////
////////////EN: Function that swaps the first two nodes of a stack//////////////
////////////////////////////////////////////////////////////////////////////////
int	ft_sa(t_chain **head, t_chain **tail)
{
	t_chain *p;
	t_chain *tmp;

	p = (*head);
	tmp = p->next;
	if ((((*head)->nb == 1) && ((*tail)->nb == 1)) || (*head) == (*tail))
		return (0);
	if (*tail == p->next)
		ft_2_sa(head, tail);
	else
	{
		ft_delete_between(1, head);
		p->prev = tmp;
		tmp->prev = NULL;
		tmp->next = p;
		(*head) = tmp;
	}
	return (0);
}
