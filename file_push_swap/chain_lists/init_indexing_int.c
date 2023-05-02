#include "../../include/headerpush_swap.h"

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
}
