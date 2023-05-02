

#include "../../include/headerpush_swap.h"

void ft_main_lst(t_tab *tab)
{
   t_chain *head_A;
   t_chain *tail_A;
   t_chain *p;
   int   i;

   i = 0;
   head_A = NULL;
   if (ft_init_list(tab, &head_A, &tail_A) == -1)
   {
      ft_free_list(&head_A);
      tab->flag = -1;
      return ;
   }
   else
   {
      p = head_A;
      while (i < tab->size)
      {
         ft_printf("\nChaine [%d]:\nNb = %d\n", i, p->nb);
         p = p->next;
         i++;
      }
   }
}
