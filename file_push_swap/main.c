#include "../include/headerpush_swap.h"

int   main(int args, char **argv)
{
     t_chain   chain;
     (void)args;
     if (ft_find_error_and_init_list(argv) == 0)
     {
          ft_printf("Error\n");
          return (0);
     }
     ft_printf("\nc'est bon ca marche !!! \n");
     ft_test_chain(chain, argv);
}
