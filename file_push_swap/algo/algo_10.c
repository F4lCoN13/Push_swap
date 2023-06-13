#include "../../include/headerpush_swap.h"

void  ft_algo_size_100(t_tab *tab,t_sv *sv)
{
   int   inter;

   inter = (tab->size / 5);
   ft_printf("\n inter = %d", inter);
   if (inter >= 2)
   {
      //while (inter != (tab->size /5) * 5)
      //{
         ft_inter(tab, sv, inter);
         inter += (tab->size / 5);
      //}
   }

  // while (ft_array_sort((&*head_A)) != 0)
   //{
      //if ((*head_A)->index <= (tab->size / 2))
         //ft_inst("pb", (&*head_A), (&*tail_A),(&*head_B), (&*tail_B));
   //}
}
