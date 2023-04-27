/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_t_chain.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:20:59 by paumarc2          #+#    #+#             */
/*   Updated: 2023/04/27 14:14:25 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/headerpush_swap.h"

void	ft_test_chain(t_chain **head_ref, t_chain **tail_ref, int index, int value)
{
	t_chain		*new_node;

	new_node	= malloc(sizeof(t_chain));
	if (!new_node)
		return ; //attention a ne pas oublier si le malloc foire
	new_node->nb = value;
	new_node->index = index;
	new_node->next = NULL;
	if (*head_ref == NULL)
	{
		new_node->prev = NULL;
        *head_ref = new_node;
        *tail_ref = new_node;
	}
	else
	{
        new_node->prev = *tail_ref;
        (*tail_ref)->next = new_node;
        *tail_ref = new_node;
	}
	ft_print_chain(*head_ref);
}

void  ft_print_chain(t_chain *head_ref)
{
     t_chain   *current;

     current = head_ref;
     while (current != NULL)
     {
          ft_printf("Index = %d\nValue = %d\n\n Next node : \n", current->index, current->nb);
          current = current->next;
     }
}
