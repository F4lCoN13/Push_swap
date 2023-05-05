/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:49:06 by paumarc2          #+#    #+#             */
/*   Updated: 2023/05/05 14:11:17 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/headerpush_swap.h"

////////////////////////////////////////////////////////////////////////////////
//////////FR: Fonctions qui deplace 1er nb de src sur 1er nb  trg///////////////
//EN: Functions that move the first element of src into the first element of trg
////////////////////////////////////////////////////////////////////////////////
int	ft_pa(t_chain **head_trg, t_chain **head_src,t_chain **tail_src)
{
	t_chain *tmp;

	tmp = *head_src;
	if (*head_src)
	{
		ft_delete_first(&*head_src, &*tail_src);
      if ((*head_trg) == NULL)
         (*head_trg) = tmp;
      else
      {
	   	(*head_trg)->prev = tmp;
	   	tmp->prev = NULL;
	   	tmp->next = (*head_trg);
	   	(*head_trg) = tmp;
      }
	}
	return (0);
}
