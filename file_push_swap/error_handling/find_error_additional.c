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
	if ((nptr[i] == '+' || nptr[i] == '-') && (nptr[i + 1] >= '0' && nptr[i + 1] <= '9'))
        i++;
   while (nptr[i] == '0' && nptr[i + 1] == '0')
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
////////////////////////////FR: Atoi modifie////////////////////////////////////
////////////////////////////EN: Atoi modifies///////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
long int   ft_find_and_return_nb(char *nptr)
{
   int          i;
   long int nb;
   int          neg;

   i = 0;
   neg = 1;
   nb = 0;
   if ((nptr[i] == '+' || nptr[i] == '-') 
         && (nptr[i + 1] >= '0' && nptr[i + 1] <= '9'))
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
   return (nb * neg);
}

////////////////////////////////////////////////////////////////////////////////
//////////////////////FR: Remplissage du tableau////////////////////////////////
/////////////////////////EN: Filling the array//////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void   ft_number(char **argv, t_tab* tab)
{
     t_sct sct; 
 
     sct.i = 0;
     while (argv[sct.i])
     {
               tab->t[sct.i] = ft_find_and_return_nb(argv[sct.i]);
          sct.i++;
      }
}

////////////////////////////////////////////////////////////////////////////////
/////////FR: Regarder si les nommbres sont bien des int sans doublon////////////
///////EN: Check if the numbers are indeed integers without duplicates//////////
////////////////////////////////////////////////////////////////////////////////
int  ft_check_double(t_tab* tab, int size)
{
   int         i;
   int         j;

   i = 0;
   while (i < size)
   {
      if ((tab->t[i] > INT_MAX) || (tab->t[i] < INT_MIN))
         return (-1);
      i++;
   }
   i = 0;
   while (i < size)
   {
      j = i + 1;
      while (j != size)
      {
         if (tab->t[i] == tab->t[j])
            return (-1);
         j++;
      }
      i++;
   }
      return (1);
}
