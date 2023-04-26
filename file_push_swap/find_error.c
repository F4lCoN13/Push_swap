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

//ATTENTION A VOIR SI IL FAUT METTRE LES '+' OU PAS 

/////////////////////////////////////////////////////////////////////////////////////////////////
/////////FR: Fonction pour obtenir les nombre totaux et verifier la taille maximum///////////////
///////////EN: Function to obtain the total numbers and check the maximum size///////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////
int   ft_new_size(char **argv)
{
     t_sct sct; 

     sct.count = 0;
     sct.i = 1;
     while (argv[sct.i])
     {
          sct.ptr = ft_split(argv[sct.i], ' ');
          sct.k = 0;
          while (sct.ptr[sct.k])
          {
               sct.j = 0;
               sct.j = ft_find_nb(sct.ptr[sct.k]);
               if (sct.j == -1)
                    return (-1);
               if (sct.j > 0)
                    sct.count += 1;
               sct.k +=  1;
               //ft_printf("\nsize nb = %d \n", sct.j);
          }
          sct.i++;
     }
     // Penser a free ptr
     return (sct.count);
}

long int   *ft_limit(char **argv)
{
     t_sct  sct;
     //New
     long int    **tab;
     int             size;
     long int    *res;

     sct.i = 0;
     size = ft_new_size(argv);
     ft_printf("size = %d\n", size);
     tab = malloc(sizeof(long int *) * (size + 1));
     if (tab == NULL)
          return (NULL);//a voir a la fin quand j aurais reminter mon tableau
     tab[0] = 0;
     ft_feed_tab(tab, size, argv);
     ft_printf("i = %d", sct.i);
     ft_printf("\nTab est la ? = %d", tab[1][0]);
     ft_printf("\nfin de la fonction ft_limit\n");
     res = malloc(sizeof(long int) * (2));
     res[0] = -1;
     return (res);
}

void	ft_find_error_and_init_list(char	**argv, t_tab* tab)
{
   
   long int *array;

   if ((ft_just_nb(argv)) == -1)
   {
      tab->flag = -1;
      return ;
   }
   array = ft_limit(argv);
     ft_printf("je suis la ");
     if(array[0] == (long int)-1)
          return ;
     ft_printf("je suis la ");

     //i = ft_nb_max(argv);
     return ;
}
