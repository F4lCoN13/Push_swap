/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_t_chain.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:20:59 by paumarc2          #+#    #+#             */
/*   Updated: 2023/04/03 13:54:26 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerpush_swap.h"

t_chain	ft_test_chain(int nombre, int i)
{
	t_chain		*list;

	list	= malloc(sizeof((t_chain) * (list))
	if (!list)
		return (NULL);
	list->nb = nombre;
	list->index = i;
	return (list);
}
