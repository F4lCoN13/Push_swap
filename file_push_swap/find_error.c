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

/////////////////////////////////////////////////////////////////////////////////////////
/* Je veux dans un premier temps verifier qu il n y est pas de doublon entre les differents chiffres, dans la fonction precedente je verifie si il y a bien que des chiffres! Je suis en train de reflechir a l'ordre dans lequel je vais effectuer mes actions sachant que je dois verifier les erreurs (que ce sont bien que des chiffres, qu il n y a pas de doublon et qu il tienne bien tous dans un int). Ducoup je voulais faire un tableau pour refaire la technique d un tableau askii, mais je me dit qu'il faudais peut etre que je cree directement et remplisse au fur et a mesure ma structure de liste chainer! */
/////////////////////////////////////////////////////////////////////////////////////////

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
               if ((argv[i][j] < 48 || argv[i][j] > 58) && argv[i][j] != 32 && argv[i][j] != '-') //demander a batbat si il faut gerer les plus 
                    return (0);
               j++;
          }
          i++;
     }
     return (i);
}

int   ft_limit(char **argv)
{
     int    i;
     int    j;
     long    nb;
     int    u;
     int    sign;
     char   **ptr;
    
     i = 1;
     while (argv[i])
     {
          ptr = ft_split(argv[i], ' ');
          if(ptr[0][0])
          {
               j = 0;
               nb = 0;
               u = 0;
               sign = 1;
               while (ptr[j])
               {
                    if (ptr[j][u] == '-')
                    {
                         sign = -1;
                         u++;;
                    }
                    while (ptr[j][u])
                    {
                         printf("nb wl = %ld\n", nb);
                         nb = nb * 10 + (ptr[j][u] - 48);
                         u++;
                    }
                    printf("\nnb = %ld\n", nb);
                    printf("\nsign = %d\n", sign);
                    nb = nb * sign;
                    printf("\nnb = %ld\n", nb);
                    if (nb > INT_MAX || nb < INT_MIN)
                         return (0);
                    j++;
               }
          }
          i++;
     }
     return (1);
}
                     // Je pense avoir la solution, je prend en compte le signe, puis j ajoute chaque dizaine a mon nombre et je verifie a chaque fois que mon nombre et bien dans les clous [[if (214748364 * 10 > INT_MAX) ft_printf("bonne idee");]]

/*int   ft_nb_max(char   **argv)
{
     int i;
     int j;

     i = 0;
     while (argv[i])
     {
          j = 0;
          if (argv[i][j])
               exit;
     }
     return (-1);
     return (-2);
}*/

int	ft_find_error_and_init_list(char	**argv)
{
     //int i;

     if ((ft_just_nb(argv)) == 0)
          return (0);
     if(ft_limit(argv) == 0)
          return (0);

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
