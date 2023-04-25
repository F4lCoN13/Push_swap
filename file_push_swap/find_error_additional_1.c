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
        /*if (nptr[i] == '-')
             n += 1;*/
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
int   ft_find_and_return_nb(char *nptr)
{
     int          i;
     unsigned int nb;
     int          n;

     i = 0;
     n = 1;
     nb = 0;
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
          nb = nb * 10 + (nptr[i] + 48);
          i++;
     }
     return (nb * n);
     
}

////////////////////////////////////////////////////////////////////////////////
//
//
////////////////////////////////////////////////////////////////////////////////
void   ft_number(char **argv, unsigned **tab)
{
     t_sct sct; 
 
     sct.i = 1;
     sct.j = 1;
     while (argv[sct.i])
     {
          sct.ptr = ft_split(argv[sct.i], ' ');
          sct.k = 0;
          while (sct.ptr[sct.k])                                                               
          {
               tab[sct.j][0] = ft_find_and_return_nb(sct.ptr[sct.k]);
               sct.j++;
               sct.k++;
          }
          sct.i++;
     }
}

////////////////////////////////////////////////////////////////////////////////
//
//
////////////////////////////////////////////////////////////////////////////////
unsigned int  **ft_feed_tab(unsigned int **tab, int size, char **argv)
{
     t_sct  sct;
     
     sct.i = 0;
     sct.j = 1;
     while (sct.i < size) 
     {
          ft_printf("hello");
          tab[sct.j] = malloc(sizeof(unsigned int) * 2);
          if (!tab[sct.j])
               return (NULL);
          sct.j++;
          sct.i++;
     }
     ft_number(argv, tab);
     sct.n = 0;
     sct.k = 1;
     while (sct.n < size)
     {
          ft_printf("\ntab [%d] = %d", sct.n, tab[sct.k][0]);
          sct.n++;
          sct.k++;
     }
     return (tab);
}
