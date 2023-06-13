

#include "../../include/headerpush_swap.h"

void ft_main_lst(t_tab *tab)
{
   t_sv   sv;

   sv.head_a = NULL;
   sv.head_b = NULL;
   sv.tail_a = NULL;
   sv.tail_b = NULL;
   if (ft_init_list(tab, &sv/*&head_A, &tail_A*/) == -1)
   {
      ft_free_list(&sv.head_a);
      ft_free_list(&sv.head_b);
      tab->flag = -1;
      return ;
   }
   ft_feed_lst(tab, &sv.head_a);
   ft_indexing(tab, &sv.head_a);
   ft_main_algo(tab, &sv);
}
////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////Info///////////////////////////////////////////////////////////
  /* p = head_A;
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
   //ft_delete_first(&head_B, &tail_B);
   //ft_delete_first(&head_B, &tail_B);
   ft_printf("Je sui la ");
   p = head_B;
   while (p != NULL)
   {
      ft_printf("\nMaillons [%d]: Nb = %d Index = [%d]", i, p->nb, p->index);
      p = p->next;
      i++;
   }
   ft_printf("\n coucou je suis la ");
   ////////////////////////////////////////////////////////////////////////////////////////////////////
   ft_inst("rrr", i, &head_A, &tail_A, &head_B, &tail_B);
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
}*/
//Penser a proteger les cas ou :
// - il n y a qu un seul nombre 
// - il y en a 2
//
//
