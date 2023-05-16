#include "../../include/headerpush_swap.h"

int   ft_array_sort(t_chain **head)
{
   t_chain  *p;

   p = *head;
   while ((p != NULL) && (p->next != NULL))
   {
      if (p->index > p->next->index)
         return (-1);
      p = p->next;
   }
   return (0);
}
