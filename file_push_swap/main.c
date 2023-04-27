/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:56:10 by paumarc2          #+#    #+#             */
/*   Updated: 2023/04/27 14:18:45 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/headerpush_swap.h"

int   main(int argc, char **argv)
{
   t_chain   *head;
   t_chain   *tail;
   t_tab     tab;
   int    i;

   (void)argc;
   i = 0;
   head = NULL;
   tail = NULL;
   ft_find_error_and_init_list(++argv, &tab);
   if (tab.flag == -1)
   {
      ft_putstr_fd("Error\n", 2);
      return (0);
   }
   /*printf("\nSize main = %d", tab.size);
   printf("\nFlag main = %d\n", tab.flag);
   while (i < tab.size)
   {
      printf("\nTab main = %ld", tab.t[i]);
      i++;
   }*/
///////////////////////////////////////////////////////////////////////////////
///////////////////////Partis trie et mise en tableau/////////////////////////
/////////////////////////////////////////////////////////////////////////////
	ft_init_list(&tab, &head, &);
	i = 1;
	while (argv[i])
	{
		ft_test_chain(&head, &tail, i, ft_atoi(argv[i]));
		i++;
	}
//	ft_print_chain(tail);
	printf("\nc'est bon ca marche !!! \n");
	return (0);
}
