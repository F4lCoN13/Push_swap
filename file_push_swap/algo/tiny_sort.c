/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:28:07 by paumarc2          #+#    #+#             */
/*   Updated: 2023/06/15 13:52:35 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/headerpush_swap.h"

void  tiny_sort_A(t_sv *sv, t_chain **head)
{
   t_chain  *highest_node;

   highest_node = find_highest(*head);
   if (*head == highest_node)
      ft_inst("ra", sv);
   if ((*head)->next == highest_node)
      ft_inst("rra", sv);
   if ((*head)->index > (*head)->next->index)
      ft_inst("sa", sv);
}

void  tiny_sort_B(t_sv *sv, t_chain **head)
{
   t_chain  *lowest_node;

   lowest_node = find_lowest(*head);
   if ((*head) == lowest_node)
      ft_inst("rb", sv);
   if ((*head)->next == lowest_node)
      ft_inst("rrb", sv);
   if ((*head)->index > (*head)->next->index)
      ft_inst("sa", sv);
}
