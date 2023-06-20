/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   roulement.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:48:35 by paumarc2          #+#    #+#             */
/*   Updated: 2023/06/20 12:59:52 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/headerpush_swap.h"

void  ft_sa_top(t_sv *sv)
{
   if (sv->head_b->index < sv->head_b->next->index)
      ft_inst("sb", sv);
}

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
      ft_sa_top(sv);
      ft_inst("rb", sv);
   }
   if (sv->head_b->index > a)
   {
      ft_inst("sb", sv);
      i += 1;
   }
   ft_inst("pb", sv);
   while (i-- != 0 && sv->tail_b->index > sv->head_b->index)
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
   if (sv->tail_b->index > a)
   {
      ft_inst("rrb", sv);
      i += 1;
   }
   ft_inst("pb", sv);
   while (i-- != 0 && sv->head_b->index > sv->tail_b->index)
   {
      ft_inst("rb", sv);
   }
}

int   ft_rr(t_sv *sv)
{
   t_sct *sct;

   ft_find_nb_to_pb(sv, "rr", sct);
   if ((ft_res_absolue(sct.i , sv->head_b->index)) >
           ft_res_absolue(sct.i, sv->tail_b->index))
   {
      if (sct.i > sv->head_b->index)
         return (0);
      else if ((sv->head_a->index < sv->head_a->next->index) && (sv->head_b->index < sv->head_b->next->index))
      {
         ft_find_nb_to_pb(sv, "ss", sct);
         return (-1);
      }

   }
   return (-1);
}

int   ft_rrr(t_sv *sv)
{
   t_sct *sct;

   ft_find_nb_to_pb(sv, "rr", sct);
   if ((ft_res_absolue(sct.i , sv->head_b->index)) >
           ft_res_absolue(sct.i, sv->tail_b->index))
      return (-1);
   else


}
