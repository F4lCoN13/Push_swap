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

int   ft_limit(char **argv)
{
     int total_nb[INT_MAX];
     size_t i;

    while (argv[i])
    {
          if (argv[i
    }
}

int	ft_find_error(char	**argv)
{
     size_t i;
     size_t j;

     i = 1;
     if (!argv[1])
          return (0);
     if(ft_limit(argv) == 0)
          return (0):
     while (argv[i])
     {
          j = 0;
          while (argv[i][j])
          {
               if (argv[i][j] < 48 || argv[i][j] > 58)
               {
                    ft_printf("Error\n");
                    return (0);
               }
               j++;
          }
          i++;
     }
     return (1);
}
