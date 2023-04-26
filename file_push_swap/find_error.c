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
//FR: Cette fonction est-la pour verifier que tous les caracteres soient uniquement des ascii compris entre 0 et 9, des ' ' et des + ou -
//EN: This function is there to verify that all characters are only ASCII characters between 0 and 9, spaces, and plus or minus signs.
/////////////////////////////////////////////////////////////////////////////////////////////////
int   ft_just_nb(char **argv)
{
     size_t i;
     size_t j;

     i = 1;
     while (argv[i])
     {
          j = 0;
          while (argv[i][j])
          {
               if ((argv[i][j] < 48 || argv[i][j] > 58) && argv[i][j] != 32 
                         && argv[i][j] != '-' && argv[i][j] != '+')
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

unsigned int   **ft_limit(char **argv)
{
     t_sct  sct;
     //New
     unsigned int    **tab;
     int             size;

     //ft_printf("\nsortis de la fonctions count  = %d\n\n", ft_new_size(argv));
     sct.i = 0;
     size = ft_new_size(argv);
     ft_printf("size = %d\n", size);
     tab = malloc(sizeof(unsigned int *) * (size + 1));
     if (tab == NULL)
          return (NULL);//a voir a la fin quand j aurais reminter mon tableau
     tab[0] = 0;
     ft_feed_tab(tab, size, argv);
     while (sct.i < size)
     {
        ft_printf("Res tab = %d\n", tab[sct.i][0]);
        sct.i++;
     }
     //ft_printf("Res last = %d\n", tab[0]);




     /*while (argv[i])
     {
          ptr = ft_split(argv[i], ' ');
          j = 0;
          nb = 0;
          u = 0;
          sign = 1;
          while (ptr[j])
          {
               if (ptr[j][u] == '-')
               {
                    sign = -1;
                    u++;
               }
               while (ptr[j][u])
               {
                    nb = nb * 10 + (ptr[j][u] - 48);
                    u++;
               }
               nb = nb * sign;
               if (nb > INT_MAX || nb < INT_MIN)
                    return (0);
               j++;
          }
          i++;
     }
     tab = malloc(sizeof(int *) * 2);
     tab[0] = malloc(sizeof(int) * 1);
     tab[0][0] = -1;*/
     ft_printf("\nfin de la fonction ft_limit\n");
     return (tab);
}
                     // Je pense avoir la solution, je prend en compte le signe, puis j ajoute chaque dizaine a mon nombre et je verifie a chaque fois que mon nombre et bien dans les clous [[if (214748364 * 10 > INT_MAX) ft_printf("bonne idee");]]


int	ft_find_error_and_init_list(char	**argv)
{
     //int i;
     unsigned int **tab;

     if ((ft_just_nb(argv)) == -1)
          return (-1);
     tab = ft_limit(argv);
     if(tab[0][0] == (unsigned int)-1)
          return (-1);

     //i = ft_nb_max(argv);
     return (1);
}

/////////////////////////////////////////////////////////////////////////////////////////
/*Je pense que je vais uniquement regarder qu il n'y est que des chiffres dans un premier temps. Ensuite je vais cree ma liste et l'a remplir, et pendant le processus de remplisage de ma liste je vais verifier : 
//                               - Les doublons 
//
//                               - Qu ils soient bien compris dans un int .
//Pour ca j'utiliserais un tableau de long et il faudras que je fasse un passe les negatif en positif . (explication: tous les nombres negatif je ne pourrais pas les mettre dans un tableau de unsigned long,, ducoup je l ai passerais en positif pour qu il face le tour et rreparte de la fin ) et je comparerais les cases et en meme temps la taille*/
/////////////////////////////////////////////////////////////////////////////////////////
