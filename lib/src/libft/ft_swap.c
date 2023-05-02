#include "../../include/libft.h"

void  ft_swap(int *tab, int *bat)
{
   int   a;

   a = *tab;
   *tab = *bat;
   *bat = a;
}
