/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_inter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:39:40 by paumarc2          #+#    #+#             */
/*   Updated: 2023/06/15 15:39:19 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/headerpush_swap.h"

////////////////////////////////////////////////////////////////////////////////
/////////////FR: FnCT QUI MET UN 1 DANS COUT A TOUTE LES NB RECHERCHE///////////
////////////////////////////////////////////////////////////////////////////////
void  ft_find_nb_in_inter(t_sv *sv, int inter)
{
   t_chain  *p;

   if (sv->head_a == NULL)
      return ;
   p = sv->head_a;
   while (p != NULL)
   {
      if (p->index <= inter)
         p->cout = 1;
      else
         p->cout = p->index;
      p = p->next;
   }
}


////////////////////////////////////////////////////////////////////////////////
///FR: FNCT QUI CALCULE OU ET LE PROCHAIN NB DS INTER LE PLUS PRES A BASCULER///
////////////////////////////////////////////////////////////////////////////////
void  ft_find_less_cost(t_tab *tab, t_sv *sv)
{
   int      i;
   int      j;
   t_chain  *p;

   i = 0;
   j = 0;
   p = sv->head_a;
   while (p != NULL)
   {
      if (p->cout == 1)
         break ;
      p = p->next;
      i++;
   }
   tab->ret = i;
   p = sv->tail_a;
   while (p != NULL)
   {
      if (p->cout == 1)
         break ;
      p = p->prev;
      j++;
   }
   if (j < i)
      tab->ret = -j -1;
}
//          ===============================================================
//AMELIORATION POSSIBLE EN REGARDANT DANS QUEL MOITIE DE LA PILE IL Y A LE PLUS DE NB RECHERCHER
//          ===============================================================

////////////////////////////////////////////////////////////////////////////////
//FR: BOUGER LES NB COMPRIS DANS INTER DANS CHAIN B
////////////////////////////////////////////////////////////////////////////////
void  ft_find_pb(t_tab *tab, t_sv *sv)
{
   int   i;

   i = 0;
   while (i != tab->ret)
   {
      if (tab->ret > 0)
      {
         if ((sv->tail_b) && (sv->head_b != sv->tail_b) && (sv->head_b < sv->tail_b))
            ft_inst("rr", sv);
         else 
            ft_inst("ra", sv);
         i++;
      }
      else if (tab->ret < 0)
      {
         if ((sv->tail_b) && (sv->head_b != sv->tail_b) && (sv->head_b > sv->tail_b))
            ft_inst("rrr", sv);
         else 
            ft_inst("rra", sv);
         i--;
      }
   }
}

////////////////////////////////////////////////////////////////////////////////
//FR: TRIER UN PETIT PEU B POUR OPTIMISER LA SUITE
////////////////////////////////////////////////////////////////////////////////
void  ft_pre_sort_b(/*t_tab *tab,*/ t_sv *sv)//, int inter)
{

   ft_pst_node(&sv->head_b);
   if (sv->head_b->total_node > 1)
   {
      if (sv->head_b->total_node == 2 && sv->head_b->index < sv->head_b->next->index)
          ft_inst("rb", sv);
      else if (sv->head_b->total_node == 3)
         tiny_sort_B(sv, &sv->head_b);

   }
}

void  ft_inter(t_tab *tab, t_sv *sv, int inter)
{
   int   i;

   i = 0;
   while (i < inter)
   {
      ft_find_nb_in_inter(sv, inter);
      ft_find_less_cost(tab, sv);
      if (tab->ret == 0 && sv->head_a->cout != 1)
         ft_inst("rra", sv);
      ft_find_pb(tab, sv);
      //==========================================
      if (sv->head_a->cout == 1)
         ft_where_put_the_nb(sv);
      //==========================================
      //ft_pre_sort_b(/*tab,*/ sv);//,inter);
      i++;
   }
}
