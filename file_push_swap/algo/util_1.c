/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:07:02 by paumarc2          #+#    #+#             */
/*   Updated: 2023/06/19 12:28:34 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/headerpush_swap.h"

////////////////////////////////////////////////////////////////////////////////
//FR: VERIFICATION QUE LA LISTE ET TRIER DANS L ORDRE CROISSANT
////////////////////////////////////////////////////////////////////////////////
int   ft_array_sort(t_chain **head)
{
   t_chain  *p;

   p = *head;
   while ((p != NULL) && (p->next != NULL))
   {
      if (p->index > p->next->index)
         return (-1);
      //else
         //p->cout = p->index;
      p = p->next;
   }
   return (0);
}

////////////////////////////////////////////////////////////////////////////////
//FR: PAS UTILISER SAIT PAS A QUOI CA SERS
////////////////////////////////////////////////////////////////////////////////
void  ft_find_cost_for_pile(t_tab *tab, t_chain *head/*, t_chain *tail*/)
{
   int      i;
   //int      pivot;
   t_chain *p;
   //t_chain *j;

   p = head;
   //j = tail;
   i = p->index;
   while (p != NULL)
   {
      if (p->index > i)
         i = p->index;
      p = p->next;
   }
   tab->pivot = i / 2;
   //ft_printf("\n COUCOU %d\n", (j->index));
}

////////////////////////////////////////////////////////////////////////////////
//FR: POSITION DE LA NODE DANS LA CHAINE
////////////////////////////////////////////////////////////////////////////////
void  ft_pst_node(t_chain **chain)
{
   int      i;
   t_chain  *p;

   p = *chain;
   i = 1;
   while (p != NULL)
   {
      p->pst_node = i;
      i++;
      p = p->next;
   }
   p = *chain;
   while (p != NULL)
   {
      p->total_node = i - 1;
      p = p->next;
   }
}

////////////////////////////////////////////////////////////////////////////////
//FR: Ou mettre mon chiffre sur la pile b
////////////////////////////////////////////////////////////////////////////////
void  ft_where_put_the_nb(t_sv *sv, int inter)
{
   if (!sv->head_b || !sv->head_b->next || !sv->head_b->next->next)
   {
      ft_inst("pb", sv);
      return ;
   }
   //if (sv->head_a->index == inter)
     // ft_top_b(sv);
   ft_printf("\n", inter);
   if ((ft_res_absolue(sv->head_a->index, sv->head_b->index)) >
           ft_res_absolue(sv->head_a->index, sv->tail_b->index))
   {
      /*if (sv->head_a->index < sv->tail_b->index)
      {
         ft_inst("rrb", sv);
         ft_inst("pb", sv);
         ft_inst("rb", sv);
         ft_inst("rb", sv);

      }
      else
      {
         ft_inst("pb", sv);
         ft_inst("rb", sv);

      }*/
      ft_bottom_b(sv);

   }
   else
   {
      /*ft_inst("pb", sv);
      if (sv->head_b->index < sv->head_b->next->index)
         ft_inst("sb", sv);*/
      ft_top_b(sv);

   }
}

////////////////////////////////////////////////////////////////////////////////
//FR: OBTENIR UN RESULTAT EN VALEUR ABSOLUE
////////////////////////////////////////////////////////////////////////////////
int   ft_res_absolue(int a, int  b)
{
   int   c;

   c = a - b;
   if (c >= 0)
      return (c);
   return (c * -1);
}
