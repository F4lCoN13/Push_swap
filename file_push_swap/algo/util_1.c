#include "../../include/headerpush_swap.h"

int   ft_array_sort(t_chain **head)
{
   t_chain  *p;

   p = *head;
   while ((p != NULL) && (p->next != NULL))
   {
      if (p->index > p->next->index)
         return (-1);
      //else
         //p->cout = p->index;
      p = p->next;
   }
   return (0);
}

void  ft_find_cost_for_pile(t_tab *tab, t_chain *head, t_chain *tail)
{
   int      i;
   //int      pivot;
   t_chain *p;
   t_chain *j;

   p = head;
   j = tail;
   i = p->index;
   while (p != NULL)
   {
      if (p->index > i)
         i = p->index;
      p = p->next;
   }
   tab->pivot = i / 2;
   ft_printf("\n COUCOU %d\n", (j->index));
}
