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

void  ft_mid(t_tab *tab, t_sv *sv)
{
   while (ft_array_sort((&sv->head_a)) != 0)
   {
      if ((sv->head_a)->index <= (tab->size / 2))
         ft_inst("pb", sv);
      else if ((sv->tail_a)->index <= (tab->size / 2))
         ft_inst("rra", sv);
      else if (((sv->head_a)->index == tab->size) &&
            ((sv->head_a)->next->next != NULL) &&
            ((sv->tail_a)->index == (sv->head_a)->next->next->index) &&
            (sv->head_a)->next->index < (sv->head_a)->next->next->index)
         ft_inst("ra", sv);
      else if (((sv->head_b) != NULL) && ((sv->head_b)->next != NULL) && 
            (((sv->head_b)->index) < ((sv->head_b)->next->index)))
         ft_inst("sb", sv);
      else if (((sv->head_a)->index > (sv->head_a)->next->index) &&
            ((sv->head_a)->next->index) > (tab->size / 2))
         ft_inst("sa", sv);
      else if (((sv->tail_a)->index < (sv->head_a)->next->index))
         ft_inst("rra", sv);
      else
         ft_inst("ra", sv);
   }
}

void  ft_algo_size_5(t_tab *tab,t_sv *sv)
{
      ft_mid(tab, sv);
      while (sv->head_b != NULL)
         ft_inst("pa", sv);
      if (ft_array_sort((&sv->head_a)) != 0)
         ft_inst("sa", sv);

}

void  ft_algo_size_3(t_chain **head, t_chain **tail, t_sv *sv)
{
   while (ft_array_sort((&*head)) != 0)
   {
      if (((*head)->index) == 1)
         ft_inst("sa", sv);
      else if (((*head)->index) == 2)
      {
         if (((*head)->next->index) == 1)
            ft_inst("sa", sv);
         else
            ft_inst("ra", sv);
      }
      else if (((*head)->next->index) == 2)
         ft_inst("ra", sv);
      else if ((*tail)->index == 3)
         ft_inst("sa", sv);
      else if ((*head)->index == 3)
         ft_inst("ra", sv);
   }
}
