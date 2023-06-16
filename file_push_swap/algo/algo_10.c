/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_10.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:38:10 by paumarc2          #+#    #+#             */
/*   Updated: 2023/06/16 16:27:30 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/headerpush_swap.h"

////////////////////////////////////////////////////////////////////////////////
//////////FR: Fonctions qui commande et distribue en dessous de 100/////////////
////////////////////////////////////////////////////////////////////////////////
void  ft_algo_size_100(t_tab *tab,t_sv *sv)
{
   short   inter;

   inter = (tab->size / 5);
   ft_printf("\n tab->size = %d && inter = %d\n", tab->size, inter);
   if (ft_array_sort(&sv->head_a) == 0)
      return ;
   if (inter >= 2)
   {
      while (inter < (tab->size /5) * 5)
      {
         ft_inter(tab, sv, inter);
         inter += (tab->size / 5);
      }
      ft_printf("\n inter == %d\n", inter);
   }

  // while (ft_array_sort((&*head_A)) != 0)
   //{
      //if ((*head_A)->index <= (tab->size / 2))
         //ft_inst("pb", (&*head_A), (&*tail_A),(&*head_B), (&*tail_B));
   //}
}
