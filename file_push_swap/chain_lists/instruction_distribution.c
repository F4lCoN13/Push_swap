/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_distribution.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:03:14 by paumarc2          #+#    #+#             */
/*   Updated: 2023/05/04 11:42:37 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/headerpush_swap.h"

////////////////////////////////////////////////////////////////////////////////
/////////FR: Fonctions qui distribue les commandes vers les fonctions///////////
///////////EN: Functions that distribute commands to the functions//////////////
////////////////////////////////////////////////////////////////////////////////
int	ft_inst(char *instruction, int i, t_chain **head_A, t_chain **tail_A, t_chain **head_B, t_chain **tail_B)
{
	if ((ft_strncmp(instruction, "sa", 2) == 0))
		i = ft_sa(&*head_A, &*tail_A);
	if ((ft_strncmp(instruction, "sb", 2) == 0))
		i = ft_sa(&*head_B, &*tail_B);
	if ((ft_strncmp(instruction, "ss", 2) == 0))
		i = (ft_sa(&*head_B, &*tail_B)) + (ft_sa(&*head_A, &*tail_A));
	if ((ft_strncmp(instruction, "pa", 2) == 0))
		i = ft_printf("\ninstr = %s\n", instruction);
	if ((ft_strncmp(instruction, "pb", 2) == 0))
		i = ft_printf("\ninstr = %s\n", instruction);
	if ((ft_strncmp(instruction, "ra", 2) == 0))
		i = ft_printf("\ninstr = %s\n", instruction);
	if ((ft_strncmp(instruction, "rb", 2) == 0))
		i = ft_printf("\ninstr = %s\n", instruction);
	if ((ft_strncmp(instruction, "rr", 2) == 0))
		i = ft_printf("\ninstr = %s\n", instruction);
	if ((ft_strncmp(instruction, "rra", 3) == 0))
		i = ft_printf("\ninstr = %s\n", instruction);
	if ((ft_strncmp(instruction, "rrb", 3) == 0))
		i = ft_printf("\ninstr = %s\n", instruction);
	if ((ft_strncmp(instruction, "rrr", 3) == 0))
		i = ft_printf("\ninstr = %s\n", instruction);
	return (i);
}
