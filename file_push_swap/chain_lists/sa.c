/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:47:24 by paumarc2          #+#    #+#             */
/*   Updated: 2023/05/05 15:42:42 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/headerpush_swap.h"

////////////////////////////////////////////////////////////////////////////////
///////////////FR: Fonctions qui intervertis head et tail///////////////////////
//////////////////EN: Functions that swap head and tail/////////////////////////
////////////////////////////////////////////////////////////////////////////////
void	ft_just_2_in_pile(t_chain **head, t_chain **tail)
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

   if (*head)
   {
	   p = (*head);
	   tmp = p->next;
	   if ((*head) == (*tail))
		   return (1);
	   if (p->next->index == (*tail)->index)
      {
		   ft_just_2_in_pile(head, tail);
      }
	   else
	   {
		   ft_delete_between(1, head);
		   p->prev = tmp;
		   tmp->prev = NULL;
		   tmp->next = p;
		   (*head) = tmp;
      }
	}
	return (0);
}
