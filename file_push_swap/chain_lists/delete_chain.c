/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_chain.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:56:55 by paumarc2          #+#    #+#             */
/*   Updated: 2023/05/05 14:06:07 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../include/headerpush_swap.h"

////////////////////////////////////////////////////////////////////////////////
////////FR: Fonctions qui supprime un maillons qui et entre 2 maillons//////////
///////////EN: Functions that delete a node that is between two nodes///////////
////////////////////////////////////////////////////////////////////////////////
void	ft_delete_between(int	pst, t_chain **head)
{
	t_chain	*p;
	t_chain	*new_link;
	int i;
	
	p = (*head);
	i = 0;
	while (i < pst - 1)
	{
		p = p->next;
		i++;
	}
	new_link = p->next->next;
	p->next = new_link;
	new_link->prev = p;
}


////////////////////////////////////////////////////////////////////////////////
///////////////FR: Fonctions qui supprime le premier  maillons//////////////////
///////////////////EN: This Function deletes the first node/////////////////////
////////////////////////////////////////////////////////////////////////////////
void	ft_delete_first(t_chain **head, t_chain **tail)
{
	t_chain *tmp;

	if (((*head) != (*tail)) && (*head))
	{
		tmp = (*head)->next;
		tmp->prev = NULL;
		(*head)->next = NULL;
		(*head) = tmp;
	}
	else if (((*head) == (*tail)) && (*head))
	{
		(*head)->next = NULL;
		(*head)->prev = NULL;
      (*head) = NULL;
	}
}

////////////////////////////////////////////////////////////////////////////////
///////////////FR: Fonctions qui supprime le dernier  maillons//////////////////
///////////////////EN: This Function deletes the last node//////////////////////
////////////////////////////////////////////////////////////////////////////////
void	ft_delete_last(t_chain **head)
{
	t_chain *tmp;

	tmp = (*head)->next;
	tmp->prev = NULL;
	(*head)->next = NULL;
	(*head) = tmp;
}

////////////////////////////////////////////////////////////////////////////////
//////////FR: Fonctions qui supprime le dernier  maillons de la chaine/////////
///////////////////EN: This Function deletes the last node//////////////////////
////////////////////////////////////////////////////////////////////////////////
void	ft_delete_last_node(t_chain **tail)
{
	t_chain *tmp;

	tmp = (*tail)->prev;
	tmp->next = NULL;
	(*tail)->prev = NULL;
	(*tail) = tmp;
}
