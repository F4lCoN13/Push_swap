/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_distribution.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   by: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:03:14 by paumarc2          #+#    #+#             */
/*   Updated: 2023/06/20 11:50:37 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/headerpush_swap.h"

////////////////////////////////////////////////////////////////////////////////
/////////FR: Fonctions qui distribue les commandes vers les fonctions///////////
///////////EN: Functions that distribute commands to the functions//////////////
////////////////////////////////////////////////////////////////////////////////
void	ft_inst_3(char *instruction, t_sv *sv)
{
   int i;
   
   i = 1;
	if ((ft_strncmp(instruction, "rrb", 3) == 0))
   {
		i = ft_rra(&sv->head_b, &sv->tail_b);
      if (i == 0)
         ft_printf("rrb\n");
   }
	if ((ft_strncmp(instruction, "rrr", 3) == 0))
   {
		i = (ft_rra(&sv->head_a, &sv->tail_a) + ft_rra(&sv->head_b, &sv->tail_b));
      if (i == 0)
         ft_printf("rrr\n");
   }
}

////////////////////////////////////////////////////////////////////////////////
/////////FR: Fonctions qui distribue les commandes vers les fonctions///////////
///////////EN: Functions that distribute commands to the functions//////////////
////////////////////////////////////////////////////////////////////////////////
void	ft_inst_2(char *instruction, t_sv *sv) 
{
   int i;

   i = 1;
	if ((ft_strncmp(instruction, "rb", 3) == 0))
   {
		i = ft_ra(&sv->head_b, &sv->tail_b);
      if (i == 0)
         ft_printf("rb\n");
   }
	if ((ft_strncmp(instruction, "rr", 3) == 0))
   {
		i = ((ft_ra(&sv->head_a, &sv->tail_a)) + (ft_ra(&sv->head_b, &sv->tail_b)));
      if (i == 0)
         ft_printf("rr\n");
   }
	if ((ft_strncmp(instruction, "rra", 3) == 0))
   {
		i = ft_rra(&sv->head_a, &sv->tail_a);
      if (i == 0)
         ft_printf("rra\n");
   }
   ft_inst_3(instruction, sv);
}

////////////////////////////////////////////////////////////////////////////////
/////////FR: Fonctions qui distribue les commandes vers les fonctions///////////
///////////EN: Functions that distribute commands to the functions//////////////
////////////////////////////////////////////////////////////////////////////////
void	ft_inst_1(char *instruction, t_sv *sv)
{
   int   i;

   i = 1;
	if ((ft_strncmp(instruction, "pa", 2) == 0))
   {
		i = ft_pa(&sv->head_a, &sv->tail_a, &sv->head_b, &sv->tail_b);
      if (i == 0)
         ft_printf("pa\n");
   }
	if ((ft_strncmp(instruction, "pb", 2) == 0))
   {
		i = ft_pa(&sv->head_b, &sv->tail_b, &sv->head_a, &sv->tail_a);
      if (i == 0)
         ft_printf("pb\n");
   }
	if ((ft_strncmp(instruction, "ra", 3) == 0))
   {
		i = ft_ra(&sv->head_a, &sv->tail_a);
      if (i == 0)
         ft_printf("ra\n");
   }
   ft_inst_2(instruction, sv); 
}

////////////////////////////////////////////////////////////////////////////////
/////////FR: Fonctions qui distribue les commandes vers les fonctions///////////
///////////EN: Functions that distribute commands to the functions//////////////
////////////////////////////////////////////////////////////////////////////////
void	ft_inst(char *instruction, t_sv *sv) 
{
   int i;

   i = 1;
	if ((ft_strncmp(instruction, "sa", 2) == 0))
   {
		i = ft_sa(&sv->head_a, &sv->tail_a);
      if (i == 0)
         ft_printf("sa\n");
   }
	if ((ft_strncmp(instruction, "sb", 2) == 0))
   {
		i = ft_sa(&sv->head_b, &sv->tail_b);
      if (i == 0)
         ft_printf("sb\n");
   }
	if ((ft_strncmp(instruction, "ss", 2) == 0))
   {
	   i = (ft_sa(&sv->head_b, &sv->tail_b)) + (ft_sa(&sv->head_a, &sv->tail_a));
      if (i == 0)
         ft_printf("ss\n");
   }
   ft_inst_1(instruction, sv); 
}
