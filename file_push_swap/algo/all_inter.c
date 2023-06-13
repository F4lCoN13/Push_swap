#include "../../include/headerpush_swap.h"

void  ft_calculate_cost(t_sv *sv, int inter)
{
   t_chain  *p;

   p = sv->head_a;
   while (p != NULL)
   {
      if (p->index <= inter)
         p->cout = 1;
      else
         p->cout = p->index;
      p = p->next;
   }
}

void  ft_find_less_cost(t_tab *tab, t_sv *sv)
{
   int      i;
   int      j;
   t_chain  *p;

   i = 0;
   j = 0;
   p = sv->head_a;
   while (p != NULL)
   {
      if (p->cout == 1)
         break ;
      p = p->next;
      i++;
   }
   tab->ret = i;
   p = sv->tail_a;
   while (p != NULL)
   {
      if (p->cout == 1)
         break ;
      p = p->prev;
      j++;
   }
   if (j < i)
      tab->ret = -j;
}

void  ft_find_pb(t_tab *tab, t_sv *sv)
{
   int   i;

   i = 0;
   while (i != tab->ret)
   {
      if (tab->ret > 0)
      {
         if ((sv->tail_b) && (sv->head_b != sv->tail_b) && (sv->head_b < sv->tail_b))
            ft_inst("rr", sv);
         else 
            ft_inst("ra", sv);
         i++;
      }
      else if (tab->ret < 0)
      {
         if ((sv->tail_b) && (sv->head_b != sv->tail_b) && (sv->head_b > sv->tail_b))
            ft_inst("rrr", sv);
         else 
            ft_inst("rra", sv);
         i--;
      }
   }
   ft_printf("\n ret = %d i = %d\n", tab->ret, i);
   ft_printf("\n head_a = %d head+1 = %d tail = %d\n", sv->head_a->index, sv->head_a->next->index, sv->tail_a->index);
   if (sv->head_a->cout == 1)
      ft_inst("pb", sv);
}

void  ft_sort_b(t_tab *tab, t_sv *sv)
{
   int   i;

   i = 0;
   while (i < 10)//ft_array_sort(&(sv->head_b)) != 0)
   {
      ft_find_cost_for_pile(tab, sv->head_b, sv->tail_b);
      //if (sv->head_b && sv->head_b->index < sv->head_b->next->index)
         //ft_inst("sb", sv);
      i++;
   }
}

void  ft_inter(t_tab *tab, t_sv *sv, int inter)
{
   int   i;

   i = 0;
   while (i < inter)
   {
      ft_calculate_cost(sv, inter);
      ft_find_less_cost(tab, sv);
      if (tab->ret == 0 && sv->head_a->cout != 1)
         ft_inst("rra", sv);
      ft_find_pb(tab, sv);
      ft_sort_b(tab, sv);
      i++;
   }
}
