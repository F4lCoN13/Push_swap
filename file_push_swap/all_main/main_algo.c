/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 14:59:18 by paumarc2          #+#    #+#             */
/*   Updated: 2023/05/05 16:17:29 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/headerpush_swap.h"

void   ft_main_algo(t_tab *tab, t_sv *sv) 
{
   t_chain  *p;
   t_chain  *s;

  /* p = *head_A;
   ft_printf("\nft_algo Avant tri =\n\n");
   while (p != NULL)
   {
      ft_printf("p index = %d\n", p->index);
      p = p->next;
   }*/
   if (tab->size <= 3)
      ft_algo_size_3(&sv->head_a, &sv->tail_a, sv);
   else if (tab->size <= 5)
      ft_algo_size_5(tab, sv);
   else if (tab->size <= 100)
      ft_algo_size_100(tab, sv);
   p = sv->head_a;
   ft_printf("\ncout =\n\n");
  /* while (p != NULL)
   {
      ft_printf("p cout = %d\n", p->cout);
      p = p->next;
   }*/
   p = sv->head_a;
   if (sv->head_b)
      s = sv->head_b;
   ft_printf("\nft_algo apres tri =\n\n");
   while (p != NULL)
   {
      if (s != NULL)
      {
         printf("A index = %-5d/cout = %-5d B index = %-5d/cout = %-5d\n", p->index, p->cout, s->index, s->cout);
         s = s->next;
         p = p->next;
      }
      else
      {
         ft_printf("p index = %d && cout = %d\n", p->index, p->cout);
         p = p->next;
      }
   }
   s = sv->head_b;
   while (s != NULL)
   {
      ft_printf("\n cout = %d", s->cout);
      s = s->next;
   }
}
