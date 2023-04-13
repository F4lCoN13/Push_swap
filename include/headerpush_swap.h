#ifndef HEADERPUSH_SWAP_H
# define HEADERPUSH_SWAP_H

# include "headerprintf.h"

typedef struct s_chain
{
     int                nb;
     int                index;
     struct s_chain*    prev;
     struct s_chain*    next;
}  t_chain;

int      ft_find_error_and_init_list(char ** argv);
void     ft_test_chain(t_chain** head_ref, t_chain** tail_ref, int index, int value);
void     ft_print_chain(t_chain* head_ref);
#endif
