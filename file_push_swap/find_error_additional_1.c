/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_error_additional_1.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 10:45:30 by paumarc2          #+#    #+#             */
/*   Updated: 2023/04/25 10:46:09 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/headerpush_swap.h"

////////////////////////////////////////////////////////////////////////////////
////////////FR: Fonction qui sert a compter la taille des nombres///////////////
///////////////EN: Functions that counts the size of numbers////////////////////
////////////////////////////////////////////////////////////////////////////////
int	ft_find_nb(char *nptr)
{
	unsigned long	i;
   int            n;

	i = 0;
   n = 0;
	while (nptr[i] == ' ' || nptr[i] == '0')
		i++;
	if ((nptr[i] == '+' || nptr[i] == '-') && (nptr[i + 1] >= '0' && nptr[i + 1] <= '9'))
   {
        if (nptr[i] == '-')
             n += 1;
        i++;
   }
	while (nptr[i] >= '0' && nptr[i] <= '9' && nptr[i])
	{
     n++;
     if (n == 12)
          return (-1);
     i++;
	}
	return (n);
}

////////////////////////////////////////////////////////////////////////////////
//
//
////////////////////////////////////////////////////////////////////////////////
void  ft_feed_tab(int **tab, int size, char **argv)
{
     t_sct  sct;
     
     sct.i = 1;
     sct.j = 0;
     while (sct.i < size)
     {

          ft_printf("Hello");
          sct.j++;
          sct.i++;
     }
     tab[0] = malloc(sizeof(int) * size);
     
}
