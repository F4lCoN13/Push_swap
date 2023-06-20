/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_inter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:39:40 by paumarc2          #+#    #+#             */
/*   Updated: 2023/06/20 12:37:06 by paumarc2         ###   ########.fr       */
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

////////////////////////////////////////////////////////////////////////////////
//FR: BOUGER LES NB COMPRIS DANS INTER DANS CHAIN B
////////////////////////////////////////////////////////////////////////////////
void  ft_go_to_switch_pile_and_pre_sort(t_tab *tab, t_sv *sv, int nb_in_b)
{
   int   i;

   i = 0;
   while (i != tab->ret)
   {
      if (tab->ret > 0)
      {
         if (ft_rr(sv) == 0)
               ft_inst("rr", sv);
         else
            ft_inst("ra", sv);
         i++;
      }
      else if (tab->ret < 0)
      {
         if (ft_rrr(sv) == 0)
               ft_inst("rrr", sv);
         else
            ft_inst("rra", sv);
         i--;
      }
   }
}

// FAIRE MON TRIE DE B EN MEME TEMPS QUE PB COMME CA JE PEUT FAIRE DES RRR ET DES RR
void  ft_inter(t_tab *tab, t_sv *sv, short inter)
{
   int   i;

   i = 0;
   while (ft_all_inter(inter, sv) != 0)
   {
      ft_find_nb_in_inter(sv, inter);
      ft_find_less_cost(tab, sv);
      if (tab->ret == 0 && sv->head_a->cout != 1)
         ft_inst("rra", sv);
      ft_go_to_switch_pile_and_pre_sort(tab, sv, i);
      ft_pst_node(&sv->head_b);
      //==========================================
      if (sv->head_a->cout == 1 && i <= 3)
         ft_where_put_the_nb(sv, inter);
      //==========================================
      i++;
   }
}

// Calculer le nombre de cout pour envoyer un nombre de l autre cote par rapport a ca position (nombre de mouveament par rapport a ca place ) Regarder la moitie qui coute le moins pour le roulememnt afin d avoir les bon chiffres 
// Voir si c est possible de tourne
