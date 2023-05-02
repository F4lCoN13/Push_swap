#ifndef HEADERPUSH_SWAP_H
# define HEADERPUSH_SWAP_H

# include "headerprintf.h"

typedef struct s_chain
{
   int               nb;
   int               index;
   int				   cout;
   int               cal_cout;
   struct s_chain   *prev;
   struct s_chain   *next;
}  t_chain;

typedef struct s_sct
{
     int    i;
     int    k;
     int    j;
     int    count;
     char   **ptr;
}  t_sct;

typedef struct s_tab
{
   long  int   *t;
   int         flag;
   int         size;
}  t_tab;

void        ft_find_error_and_init_list(char ** argv, t_tab* tab);
void        ft_test_chain(t_chain** head_ref, t_chain** tail_ref, int index, int value);
void        ft_print_chain(t_chain* head_ref);
int         ft_find_nb(char *nptr);
void        ft_feed_tab(long int **tab, int size, char **argv);
void        ft_number(char **argv, t_tab* tab);
int         ft_check_double(t_tab* tab, int size);
int	   	ft_init_list(t_tab *tab, t_chain **head, t_chain **tail);
int         ft_new_node(t_chain **head, t_chain **tail);
void        ft_free_list(t_chain **head);
void        ft_indexing(t_tab *tab, t_chain **head);
void        ft_main_lst(t_tab *tab);
////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////TEST//////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
void		ft_test_chain(t_chain **head_ref, t_chain **tail_ref, int index, int value);
void		ft_print_chain(t_chain *head_ref);
#endif
