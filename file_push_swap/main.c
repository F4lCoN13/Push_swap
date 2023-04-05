#include "../include/headerpush_swap.h"

int   main(int argc, char **argv)
{
     t_chain   *head;
     t_chain   *tail;
     int i;

     i = 1;
     head = NULL;
     tail = NULL;
     if (ft_find_error_and_init_list(argv) == 0 || argc == 1)
     {
          ft_printf("Error\n");
          return (0);
     }
     while (argv[i])
     {
          ft_test_chain(&head, &tail, i, ft_atoi(argv[i]));
          i++;
     }
     //ft_print_chain(head);
     ft_printf("\nc'est bon ca marche !!! \n");
}
