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
   while (nptr[i] == ' ')
      i++;
   while (nptr[i] == '0')
      i++;
	if ((nptr[i] == '+' || nptr[i] == '-') && (nptr[i + 1] >= '0' && nptr[i + 1] <= '9'))
        i++;
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
//////////////////////////FR: Equivalent atoi plus 0////////////////////////////
//EN: 
////////////////////////////////////////////////////////////////////////////////
int   ft_find_and_return_nb(char *nptr)
{
     int          i;
     long int nb;
     int          neg;

     i = 0;
     neg = 1;
     nb = 0;
     while (nptr[i] == ' ')
          i++;
     while (nptr[i] == '0')//a voir comment gerer le cas du 0
         i++;
     if (nptr[i] == '+' || nptr[i] == '-')
     {
          if (nptr[i] == '-')
               neg *= -1;
          i++;
     }
     while (nptr[i] >= '0' && nptr[i] <= '9')
     {
          nb = nb * 10 + (nptr[i] - 48);
          i++;
     }
     ft_printf("NB = %d\n", nb);
     return (nb * neg);
}

////////////////////////////////////////////////////////////////////////////////
//////////////////////FR: Remplissage du tableau////////////////////////////////
/////////////////////////EN: Filling the array//////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void   ft_number(char **argv, long int **tab)
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
///////////FR: Malloc puis deviation vers remplissage du tableau////////////////
///////////////EN: Malloc then branching to fill the array//////////////////////
////////////////////////////////////////////////////////////////////////////////
void ft_feed_tab(long int **tab, int size, char **argv)
{
     t_sct sct;

     sct.i = 0;
     sct.j = 1;
     while (sct.i < size) 
     {
          tab[sct.j] = malloc(sizeof(long int) * 2);
          tab[sct.j][0] = sct.j;
          if (!tab[sct.j])
               return ;
          sct.j++;
          sct.i++;
     }
     ft_number(argv, tab);
     sct.n = 0;
     sct.k = 1;
}
