/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:48:35 by paumarc2          #+#    #+#             */
/*   Updated: 2023/06/16 16:06:46 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/headerpush_swap.h"

void  ft_top_b(t_sv *sv)
{
   int   a;
   int   i;
   t_chain  *p;

   a = sv->head_a->index;
   i = 0;
   p = sv->head_b;
   while (i++ < 2 && a < p->index) 
   {
      p = p->next;
      ft_inst("rb", sv);
   }
   ft_inst("pb", sv);
   if (sv->head_b->next->index > a)
      ft_inst("sb", sv);
   while (i-- != 0)
   {
      ft_inst("rrb", sv);
   }
}


void  ft_bottom_b(t_sv *sv)
{
   int   a;
   int   i;
   t_chain  *p;

   a = sv->head_a->index;
   i = 0;
   p = sv->tail_b;
   while (i++ < 2 && a < p->index) 
   {
      p = p->prev;
      ft_inst("rrb", sv);
   }
   if (sv->tail_b->index < a)
   {
      ft_inst("rrb", sv);
      i += 1;
   }
   ft_inst("pb", sv);
   while (i-- != 0)
   {
      ft_inst("rb", sv);
   }
}
