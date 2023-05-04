/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_chain.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:56:55 by paumarc2          #+#    #+#             */
/*   Updated: 2023/05/04 12:03:29 by paumarc2         ###   ########.fr       */
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
///////////////FR: Fonctions qui supprime le premier  maillons/////////////////
///////////EN: Functions that delete a node that is between two nodes///////////
////////////////////////////////////////////////////////////////////////////////
void	ft_delete_first(t_chain **head)
{

}
