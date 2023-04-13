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
void    ft_free_tab(int *tab, int count)
{
    while (count != 0)
    {
        free(&tab[count]);
    }
        free(&tab[0]);
}


/////////////////////////////////////////////////////////////////////////////////////////////////
///FR: Fonction pour remplir un nouveau tableau avec toutes les donnes de l'ancien tableau
///EN: Function to fill a new array with all the data from the old array
/////////////////////////////////////////////////////////////////////////////////////////////////
void    ft_new_alloc(int *new_tab, int *tab, int count)
{
    int i;

    i = 0;
    new_tab = malloc(sizeof(int) * (count));
    if (!new_tab)
    {
        ft_free_tab(new_tab, count);
        return ;
    }
    while (i != count)
    {
        ft_printf("\n\nJe suis dans ft_new_alloc dans le while\n\n");
        ft_printf("\n\ncount = %d\n\n", count);
        ft_printf("\n\ntab[0] = %d\n\n", tab[-1]);
        new_tab[i] = tab[i];
        i++;
        ft_printf("\n\nJe suis dans ft_new_alloc a la fin du  while\n\n");
    }
    ft_free_tab(new_tab, count);
    return ;
}


/////////////////////////////////////////////////////////////////////////////////////////////////
///FR: Fonction pour remplir avec les anciennes data et la nouvelle le tableau d'origine
///EN: Function to populate the original array with both old and new data.
/////////////////////////////////////////////////////////////////////////////////////////////////
int ft_new_tab(int *new_tab, int *tab, int count, int new_data)
{
    int i;
    
    i = 0;
    count += 1;
    tab = malloc(sizeof(int) * (count));
    if (!tab)
    {
        ft_free_tab(tab, count);
        return (-1);
    }
    while (i < count)
    {
        tab[i] = new_tab[i];
        i++;
    }
    tab[i] = new_data;
    ft_free_tab(new_tab, count);
    return (count);
}

/////////////////////////////////////////////////////////////////////////////////////////////////
///FR: Fonction pour regarder si il y a des doublons
///EN: Fonction for tchek if there is double number
/////////////////////////////////////////////////////////////////////////////////////////////////
int   ft_check_double(int *tab, int  nb, int count)
{
    int *new_tab;
    //int move;

   //move = 0;
    new_tab = NULL;
    if (count == 0)
    {
        ft_printf("\nje suis dans check double dans le if\n");
        tab = malloc(sizeof(int) * (1));
        if (!tab)
        {
            ft_free_tab(tab, 1);
            return (-1);
        }
        count = 1;
        tab[0] = nb;
        ft_printf("\nnb = %d", nb); 
        ft_printf("\ntab[0] = %d\n", tab[0]); 
        ft_printf("\nje suis dans check double a la fin du  if\n");
        return (count);
    }
    else
    {
        ft_printf("\nje suis dans check double dans le else\n");
        ft_new_alloc(new_tab, tab, count);
        ft_printf("\n\nLa fonction New alloc a marcher \n\n");
        count += ft_new_tab(new_tab, tab, count, nb);
        return (count);
    }
    //manque une fonction  pour verifier que toutes les donnes sont differentes
}

int   ft_limit(char **argv)
{
     int    i;
     int    j;
     long    nb;
     int    u;
     int    sign;
     char   **ptr;
     int    *tab;
     int    count;
    
     i = 1;
     count = 0;
     tab = NULL;
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
                         ft_printf("nb while ft_limit = %ld\n", nb);
                         nb = nb * 10 + (ptr[j][u] - 48);
                         u++;
                    }
                    ft_printf("\nnb apres while  = %ld\n", nb);
                    ft_printf("sign nb apres while= %d\n", sign);
                    nb = nb * sign;
                    printf("\nnb apres * sign= %ld\n", nb);
                    if (nb > INT_MAX || nb < INT_MIN)
                         return (0);
                    //mise en place d'une fonction pour mettre tous les chiffres dans un tableau
                    count = ft_check_double(tab, nb, count);
                    // analyze_array_and_get_size()
                     //test de ft_check_double
                    ft_printf("\ncount = %d\n", count);
                    j++;
                    ft_printf("fin de la fonction ft_limit\n");
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
