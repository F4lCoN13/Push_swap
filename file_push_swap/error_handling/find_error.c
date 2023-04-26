/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_errors.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:28:31 by paumarc2          #+#    #+#             */
/*   Updated: 2023/03/31 16:29:28 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/headerpush_swap.h"

/////////////////////////////////////////////////////////////////////////////////////////////////
///////FR: Fonction qui verifie qu'il n'y ait que des int, et des +/- place devant les nb////////
//EN: Function that checks that there are only integers, and +/- signs in front of the numbers///
/////////////////////////////////////////////////////////////////////////////////////////////////
int   ft_just_nb(char **argv)
{
     size_t i;
     size_t j;

     i = 0;
     while (argv[i])
     {
          j = 0;
          while (argv[i][j])
          {
               if ((argv[i][j] < 48 || argv[i][j] > 58) && argv[i][j] 
                     && argv[i][j] != '-' && argv[i][j] != '+')
                    return (-1);
               if ((argv[i][j] == '-' || argv[i][j] == '+') 
                     && (argv[i][j - 1]))
                     return (-1);
               j++;
          }
          i++;
     }
     return (i);
}

/////////////////////////////////////////////////////////////////////////////////////////////////
/////////FR: Fonction pour obtenir les nombre totaux et verifier la taille maximum///////////////
///////////EN: Function to obtain the total numbers and check the maximum size///////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////
int   ft_new_size(char **argv)
{
   int   count;
   int   i;
   int   j;
   
   count = 0;
   i = 0;
   while (argv[i])
   {
      j = 0;
      j = ft_find_nb(argv[i]);
      if (j == -1)
         return (-1);
      if (j > 0)
         count += 1;
      i++;
   }
   return (count);
}

/////////////////////////////////////////////////////////////////////////////////////////////////
////////////FR: Commande les fonctions pour remplir le tableau avec les bon nombres//////////////
////////////////EN: Command the functions to fill the array with good numbers////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////
int   ft_limit(char **argv, t_tab* tab)
{

   tab->size = ft_new_size(argv);
   ft_printf("size = %d\n", tab->size);
   tab->t = malloc(sizeof(long int) * (tab->size));
   if (tab->t == NULL)
      return (-1);
   ft_number(argv, tab);
   if (ft_check_double(tab, tab->size) == -1)
      return (-1);
   return (1);
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//FR: Lance toutes les fonctions pour les erreurs et recuperer le tableau avec les bon nombres///
//////EN: Run all the functions for errors and retrieve the array with the correct numbers///////
/////////////////////////////////////////////////////////////////////////////////////////////////
void	ft_find_error_and_init_list(char	**argv, t_tab* tab)
{
   
   if (((ft_just_nb(argv)) == -1) || (ft_limit(argv, tab) == -1))
   {
      tab->flag = -1;
      free(tab->t);
      return ;
   }
   tab->flag = 1;
   return ;
}
