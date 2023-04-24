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
               if ((argv[i][j] < 48 || argv[i][j] > 58) && argv[i][j] != 32 && argv[i][j] != '-') //demander a batbat si il faut gerer les plus 
                    return (0);
               j++;
          }
          i++;
     }
     return (i);
}

/////////////////////////////////////////////////////////////////////////////////////////////////
///FR: Fonction pour regarder si il y a des doublons
///EN: Fonction for tchek if there is double number
/////////////////////////////////////////////////////////////////////////////////////////////////

int   ft_new_size(char **argv)
{
     int i;
     int k;
     int n;
     int j;
     int count;
     char **ptr;
     
     count = 0;
     i = 0;
     while (argv[i])
     {
          ptr = ft_split(argv[i], ' ');
          if(ptr[0][0])
          {
               k = 0;
               j = 0;
               while (ptr[k][j])
               {
                    printf("coucou");
                    while(ptr[i][j] == '0' || ptr[i][j] == ' ' || ptr[i][j] == '+' || ptr[i][j] == '-')
                    {
                         j++;
                    }
                    n = 0;
                    while (ptr[i][j] >= '0' && ptr[i][j] <= '9')
                    {
                         if (n == 12)
                              return (-1);
                         n++;
                         j++;
                    }
                    count += 1;
                    k++;
               }
          }
          i++;
     }
     return (count);
}
     
int   **ft_limit(char **argv)
{
     int    i;
     int    j;
     long    nb;
     int    u;
     int    sign;
     char   **ptr;
     int    **tab;
    
     i = 1;
     printf("\ncount = %d\n\n", ft_new_size(++argv));
     while (argv[i])
     {
          ptr = ft_split(argv[i], ' ');
          printf("res ptr = %s\n", ptr[0]);
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
          }
          i++;
     }
     tab = malloc(sizeof(int *) * 2);
     tab[0] = malloc(sizeof(int) * 1);
     tab[0][0] = -1;
     ft_printf("fin de la fonction ft_limit\n");
     return (tab);
}
                     // Je pense avoir la solution, je prend en compte le signe, puis j ajoute chaque dizaine a mon nombre et je verifie a chaque fois que mon nombre et bien dans les clous [[if (214748364 * 10 > INT_MAX) ft_printf("bonne idee");]]


int	ft_find_error_and_init_list(char	**argv)
{
     //int i;
     int **tab;

     if ((ft_just_nb(argv)) == 0)
          return (0);
     tab = ft_limit(argv);
     if(tab[0][0] == -1)
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
