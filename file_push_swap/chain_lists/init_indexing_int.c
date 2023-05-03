/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_indexing_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:01:34 by paumarc2          #+#    #+#             */
/*   Updated: 2023/05/03 14:47:00 by paumarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/headerpush_swap.h"

////////////////////////////////////////////////////////////////////////////////
/////////////FR: Fonctions qui va trier mon nouveau tableau/////////////////////
/////////////////EN: Function that sort my new array////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}

////////////////////////////////////////////////////////////////////////////////
/////////////FR: Fonctions qui sert a remplir mon nouveau tableau//////////////
///////////EN: Function that serve to creates and add get other node////////////
////////////////////////////////////////////////////////////////////////////////
void  ft_feed_and_sort(t_tab *tab, int *sort)
{
   int   i;

   i = 0;
   while (i <tab->size)
   {
     sort[i] = tab->t[i]; 
     i++;
   }
   ft_sort_int_tab(sort, tab->size);
}

////////////////////////////////////////////////////////////////////////////////
/////////////FR: Fonctions qui va me permettre d'indexer mes nombres////////////
////////////////EN: Function that serve to index all my numbers/////////////////
////////////////////////////////////////////////////////////////////////////////
void  ft_indexing(t_tab *tab, t_chain **head)
{
   int   i;
   int   *sort;
   t_chain *p;

   p = *head;
   sort = malloc(sizeof(int) * tab->size);
   if (sort == NULL)
   {
      free(sort);
      tab->flag = -1;
      return ;
   }
   ft_feed_and_sort(tab, sort);
   while (p != NULL)
   {
     i = 0;
     while (p->nb != sort[i])
        i++;
     p->index = i;
     p = p->next;
   }
   free(sort);
}
