/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:21:22 by paumarc2          #+#    #+#             */
/*   Updated: 2023/05/05 16:26:22 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/headerpush_swap.h"

void  ft_algo_size_3(t_tab *tab, t_chain **head, t_chain **tail)
{
   ft_printf("\n tab = %d", tab->size);
   ft_printf("\n head = %d", (*head)->nb);
   ft_printf("\n tail = %d", (*tail)->nb);
}
