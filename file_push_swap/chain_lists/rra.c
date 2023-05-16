/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:05:28 by paumarc2          #+#    #+#             */
/*   Updated: 2023/05/05 11:12:36 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/headerpush_swap.h"


////////////////////////////////////////////////////////////////////////////////
//////////FR: Fonctions qui deplace le dernier nb en tete de pile///////////////
////////EN: Functions that move the last number in the top of chainlist/////////
////////////////////////////////////////////////////////////////////////////////
int	ft_rra(t_chain **head, t_chain **tail)
{
	t_chain *tmp;
  
	tmp = (*tail);
   ft_delete_last_node(&*tail);
   (*head)->prev = tmp;
   tmp->next = (*head);
   (*head) = tmp;
   return (0);
}
