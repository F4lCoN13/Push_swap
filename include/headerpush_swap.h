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

typedef struct s_sct
{
     int    i;
     int    k;
     int    j;
     int    count;
     int    nb;
     int    n;
     char   **ptr;
}  t_sct;

int      ft_find_error_and_init_list(char ** argv);
void     ft_test_chain(t_chain** head_ref, t_chain** tail_ref, int index, int value);
void     ft_print_chain(t_chain* head_ref);
int      ft_find_nb(char *nptr);
void     ft_feed_tab(int **tab, int size, char **argv);
#endif
