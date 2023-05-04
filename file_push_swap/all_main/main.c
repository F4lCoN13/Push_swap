/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:56:10 by paumarc2          #+#    #+#             */
/*   Updated: 2023/05/04 10:29:38 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/headerpush_swap.h"

int   main(int argc, char **argv)
{
   t_tab     tab;

   if (argc == 1)
      return (0);
   ft_find_error_and_init_list(++argv, &tab);
   if (tab.flag == -1)
   {
      ft_putstr_fd("Error\n", 2);
      return (0);
   }
   if (tab.size == 1)
	return (0);
   ft_main_lst(&tab);
   if (tab.flag == -1)
   {
      ft_putstr_fd("Error\n", 2);
      return (0);
	}
	printf("\nc'est bon ca marche !!! \n");
	return (0);
}
