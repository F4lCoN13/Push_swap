/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:28:07 by paumarc2          #+#    #+#             */
/*   Updated: 2023/06/16 13:39:55 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/headerpush_swap.h"

void  tiny_sort_A(t_sv *sv, t_chain **head)
{
   t_chain  *highest_node;

   highest_node = find_highest(*head);
   if (*head == highest_node)
      ft_inst("ra", sv);
   if ((*head)->next == highest_node)
      ft_inst("rra", sv);
   if ((*head)->index > (*head)->next->index)
      ft_inst("sa", sv);
}

void  tiny_sort_B(t_sv *sv, t_chain **head)
{
   t_chain  *lowest_node;

   lowest_node = find_lowest(*head);
   if ((*head) == lowest_node)
      ft_inst("rb", sv);
   if ((*head)->next == lowest_node)
      ft_inst("rrb", sv);
   if ((*head)->index > (*head)->next->index)
      ft_inst("sa", sv);
}

int   ft_all_inter(short inter, t_sv *sv)
{
   t_chain  *p;
   int      tab;

   tab = 0;
   if (sv->head_b != NULL)
   {
      p = sv->head_b;
      while (p != NULL)
      {
         tab++;
         p = p->next;
      }
   }
   if (tab == inter)
      return (0);
   else
      return (-1);
}
