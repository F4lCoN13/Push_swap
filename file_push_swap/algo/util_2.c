/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 12:58:48 by paumarc2          #+#    #+#             */
/*   Updated: 2023/06/15 17:37:28 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/headerpush_swap.h"

t_chain  *find_highest(t_chain *head)
{
   int      highest;
   t_chain  *highest_node;

   highest = 0;
   if (NULL == head)
      return (NULL);
   while (head != NULL)
   {
      if (head->index > highest)
      {
         highest = head->index;
         highest_node = head;
      }
      head = head->next;
   }
   return (highest_node);
}

t_chain  *find_lowest(t_chain *head)
{
   int      lowest;
   t_chain  *lowest_node;

   lowest = 1000;
   if (NULL == head)
      return (NULL);
   while (head != NULL)
   {
      if (head->index < lowest)
      {
         lowest = head->index;
         lowest_node = head;
      }
      head = head->next;
   }
   return (lowest_node);
}

void  ft_tchec_better_place_up(int mid, t_sv *sv)
{
   int       i;
   int       j;
   t_chain  *p;

   i = 0;
   j = 0;
   p = sv->head_b;
   while ((sv->head_a->index < p->index) && (i++ < mid))
      p = p->next;
   if (i > 0)
   {
      while (j++ != i)
         ft_inst("rb", sv);
      ft_inst("pb", sv);
      while (j-- != 0)
         ft_inst("rrb", sv);
   }
   else
      ft_inst("pb", sv);
}

void  ft_tchec_better_place_down(int mid, t_sv *sv)
{
   int      i;
   int      j;
   t_chain  *p;

   i = 0;
   j = 0;
   p = sv->tail_b;
   while ((sv->head_a->index > p->index) && (i++ < mid))
      p = p->prev;
   if (i > 0)
   {
      while (j++ != i)
         ft_inst("rrb", sv);
      ft_inst("pb", sv);
      while (j-- != 0)
         ft_inst("rb", sv);
   }
   else
      ft_inst("pb", sv);
}
