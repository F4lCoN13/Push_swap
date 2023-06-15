/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:48:35 by paumarc2          #+#    #+#             */
/*   Updated: 2023/06/15 17:25:44 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/headerpush_swap.h"

int   ft_up(int mid, t_sv *sv)
{
   int       i;
   int       res;
   t_chain   *p;

   res = 0;
   i = 0;
   p = sv->head_b;
   while (i++ < mid)
   {
      res = ft_res_absolue(res,  p->index);
      p = p->next;
   }
   return (res);
}


int   ft_down(int mid, t_sv *sv)
{
   int       i;
   int       res;
   t_chain   *p;

   res = 0;
   i = 0;
   p = sv->tail_b;
   while (i++ < mid)
   {
      res = ft_res_absolue(res,  p->index);
      p = p->prev;
   }
   return (res);
}
