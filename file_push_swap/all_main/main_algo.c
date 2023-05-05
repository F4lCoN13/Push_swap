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
   if (tab->size < 3)
      ft_algo_size_3(tab, (&*head_A), (&*tail_A));
   if (*head_A)
      ft_printf(" \nhead A %d", (*head_A)->nb);
   if (*tail_A)
      ft_printf(" \ntail A %d", (*tail_A)->nb);
   if (*head_B)
      ft_printf(" \nhead b",(*head_B)->nb);
   if (*tail_B)
      ft_printf(" \ntail B", (*tail_B)->nb);
   ft_printf("\ntab = %d", tab->size);
}
