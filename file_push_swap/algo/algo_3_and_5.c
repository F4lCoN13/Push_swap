/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:21:22 by paumarc2          #+#    #+#             */
/*   Updated: 2023/05/05 16:26:22 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/headerpush_swap.h"

void  ft_mid(t_tab *tab, t_chain **head_A, t_chain **tail_A, t_chain **head_B, t_chain **tail_B)
{
   while (ft_array_sort((&*head_A)) != 0)
   {
      if ((*head_A)->index <= (tab->size / 2))
         ft_inst("pb", (&*head_A), (&*tail_A),(&*head_B), (&*tail_B));
      else if ((*tail_A)->index <= (tab->size / 2))
         ft_inst("rra", (&*head_A), (&*tail_A),(&*head_B), (&*tail_B));
      else if (((*head_A)->index == tab->size) && 
            ((*tail_A)->index == (*head_A)->next->next->index) &&
            (*head_A)->next->index < (*head_A)->next->next->index)
         ft_inst("ra", (&*head_A), (&*tail_A),(&*head_B), (&*tail_B));
      else if (((*head_B) != NULL) && ((*head_B)->next != NULL) && 
            (((*head_B)->index) < ((*head_B)->next->index)))
         ft_inst("sb", (&*head_A), (&*tail_A),(&*head_B), (&*tail_B));
      else if (((*head_A)->index > (*head_A)->next->index) &&
            ((*head_A)->next->index) > (tab->size / 2))
         ft_inst("sa", (&*head_A), (&*tail_A),(&*head_B), (&*tail_B));
      else if (((*tail_A)->index < (*head_A)->next->index))
         ft_inst("rra", (&*head_A), (&*tail_A),(&*head_B), (&*tail_B));
      else
         ft_inst("ra", (&*head_A), (&*tail_A),(&*head_B), (&*tail_B));
   }
}

void  ft_algo_size_5(t_tab *tab, t_chain **head_A, t_chain **tail_A, t_chain **head_B, t_chain **tail_B)
{

      ft_mid(tab, (&*head_A), (&*tail_A), (&*head_B), (&*tail_B));
      while (*head_B != NULL)
         ft_inst("pa", (&*head_A), (&*tail_A),(&*head_B), (&*tail_B));
      if (ft_array_sort((&*head_A)) != 0)
         ft_inst("sa", (&*head_A), (&*tail_A),(&*head_B), (&*tail_B));

}

void  ft_algo_size_3(t_chain **head, t_chain **tail)
{
   while (ft_array_sort((&*head)) != 0)
   {
      if (((*head)->index) == 1)
         ft_inst("sa", (&*head), (&*tail),(&*head), (&*tail));
      else if (((*head)->index) == 2)
      {
         if (((*head)->next->index) == 1)
            ft_inst("sa", (&*head), (&*tail),(&*head), (&*tail));
         else
            ft_inst("ra", (&*head), (&*tail),(&*head), (&*tail));
      }
      else if (((*head)->next->index) == 2)
         ft_inst("ra", (&*head), (&*tail),(&*head), (&*tail));
       else if (((*head)->next->next->index) == 3)
         ft_inst("sa", (&*head), (&*tail),(&*head), (&*tail));
      else if ((*head)->index == 3)
         ft_inst("ra", (&*head), (&*tail),(&*head), (&*tail));
   }
}
