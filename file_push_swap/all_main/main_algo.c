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

void   ft_main_algo(t_tab *tab, t_chain **head_A, t_chain **tail_A, t_chain **head_B, t_chain **tail_B)
{
   t_chain *p;

  /* p = *head_A;
   ft_printf("\nft_algo Avant tri =\n\n");
   while (p != NULL)
   {
      ft_printf("p index = %d\n", p->index);
      p = p->next;
   }*/
   if (tab->size <= 3)
      ft_algo_size_3((&*head_A), (&*tail_A));
   if (tab->size <= 5)
      ft_algo_size_5(tab, (&*head_A), (&*tail_A), (&*head_B), (&*tail_B));
   p = *head_A;
   ft_printf("\nft_algo apres tri =\n\n");
   while (p != NULL)
   {
      ft_printf("p index = %d\n", p->index);
      p = p->next;
   }
}
