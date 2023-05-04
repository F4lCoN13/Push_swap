

#include "../../include/headerpush_swap.h"

void ft_main_lst(t_tab *tab)
{
   t_chain *head_A;
   t_chain *head_B;
   t_chain *tail_A;
   t_chain *tail_B;
   t_chain *p;
   int   i;

   i = 0;
   head_A = NULL;
   head_B = NULL;
   if ((ft_init_list(tab, &head_A, &tail_A) == -1) || (ft_init_list(tab, &head_B, &tail_B) == -1))// penser a enlever le b qui ne sers a rien initialiser ici
   {
      ft_free_list(&head_A);
      ft_free_list(&head_B);
      tab->flag = -1;
      return ;
   }
   ft_feed_lst(tab, &head_A);
   ft_indexing(tab, &head_A);
   ////////////////////////////////////////////////////////////////////////////////////////////////////
   /////////////////////////////////////Info///////////////////////////////////////////////////////////
   p = head_A;
   ft_printf("\nhead A\n");
   while (p != NULL)
   {
      ft_printf("\nMaillons [%d]: Nb = %d Index = [%d]", i, p->nb, p->index);
      p = p->next;
      i++;
   }
   ft_printf("\nhead B\n");
   p = head_B;
   i = 0;
   p->nb = 17;
   p->index = 9;
   p->next->nb = 24;
   p->next->index = 10;
   while (p != NULL)
   {
      ft_printf("\nMaillons [%d]: Nb = %d Index = [%d]", i, p->nb, p->index);
      p = p->next;
      i++;
   }
   ////////////////////////////////////////////////////////////////////////////////////////////////////
   ft_inst("rra", i, &head_A, &tail_A, &head_B, &tail_B);
   ////////////////////////////////////////////////////////////////////////////////////////////////////
   ft_printf("\n AFTER TEST =\n");
   p = head_A;
   i = 0;
   ft_printf("\nhead A\n");
   while (p != NULL)
   {
      ft_printf("\nMaillons [%d]: Nb = %d Index = [%d]", i, p->nb, p->index);
      p = p->next;
      i++;
   }
  ft_printf("\nhead B\n");
  p = head_B;
   i = 0;
   while (p != NULL)
   {
      ft_printf("\nMaillons [%d]: Nb = %d Index = [%d]", i, p->nb, p->index);
      p = p->next;
      i++;
   }
}
//Penser a proteger les cas ou :
// - il n y a qu un seul nombre 
// - il y en a 2
//
