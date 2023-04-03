#ifndef HEADERPUSH_SWAP_
# define HEADERPUSH_SWAP_H

# include "headerprintf.h"

typedef struct s_chain
{
     int                nb;
     int                index;
     struct s_chain*    prev;
     struct s_chain*    next;
}              t_chain;

int      ft_find_error_and_init_list(char ** argv);
#endif
