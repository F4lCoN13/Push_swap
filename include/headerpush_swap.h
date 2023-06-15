#ifndef HEADERPUSH_SWAP_H
# define HEADERPUSH_SWAP_H

# include "headerprintf.h"

typedef struct s_chain
{
   int               nb;
   int               index;
   int               cout;
   int               pst_node;
   int               total_node;
   int               cal_cout;
   struct s_chain    *prev;
   struct s_chain    *next;
}  t_chain;

typedef struct s_sv
{
   t_chain  *head_a;
   t_chain  *tail_a;
   t_chain  *head_b;
   t_chain  *tail_b;
}  t_sv;

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
   int         ret;
   int         pivot;
   int         size;
}  t_tab;

void        ft_find_error_and_init_list(char ** argv, t_tab* tab);
void        ft_test_chain(t_chain** head_ref, t_chain** tail_ref, int index, int value);
void        ft_print_chain(t_chain* head_ref);
int         ft_find_nb(char *nptr);
void        ft_feed_tab(long int **tab, int size, char **argv);
void        ft_number(char **argv, t_tab* tab);
int         ft_check_double(t_tab* tab, int size);

int			ft_init_list(t_tab *tab, t_sv *sv);
int         ft_new_node(t_sv *sv);
void        ft_free_list(t_chain **head);
void        ft_indexing(t_tab *tab, t_chain **head);
void	   	ft_feed_lst(t_tab *tab, t_chain **head);

void        ft_main_lst(t_tab *tab);
void        ft_main_algo(t_tab *tab, t_sv *sv);

void			ft_inst(char *instruction, t_sv *sv);
int			ft_sa(t_chain **head, t_chain **tail);
int			ft_sb(t_chain **head, t_chain **tail);
int			ft_pa(t_chain **head_trg, t_chain **tail_trg, t_chain **head_src, t_chain **tail_src);
int			ft_ra(t_chain **head, t_chain **tail);
int			ft_rra(t_chain **head, t_chain **tail);

void  		ft_delete_between(int	pst, t_chain **head);
void	   	ft_delete_first(t_chain **head, t_chain **tail);
void	   	ft_delete_last(t_chain **head);
void	   	ft_delete_last_node(t_chain **tail);

void        ft_algo_size_3(t_chain **head, t_chain **tail, t_sv *sv);
void        ft_algo_size_5(t_tab *tab, t_sv *sv);
void        ft_inter(t_tab *tab, t_sv *sv, int inter);
void        ft_algo_size_100(t_tab *tab, t_sv *sv);

int         ft_array_sort(t_chain **head);
void        ft_real_sa(t_tab *tab, t_chain **head, t_chain **tail);
void        ft_find_cost_for_pile(t_tab *tab, t_chain *head/*, t_chain *tail*/);
void        ft_pst_node(t_chain **chain);

void        tiny_sort_A(t_sv *sv, t_chain **head);
void        tiny_sort_B(t_sv *sv, t_chain **head);
t_chain     *find_highest(t_chain *head);
t_chain     *find_lowest(t_chain *head);
void        ft_where_put_the_nb(t_sv *sv);
int         ft_res_absolue(int a, int b);
void        ft_tchec_better_place_up(int mid, t_sv *sv);
void        ft_tchec_better_place_down(int mid, t_sv *sv);

int         ft_up(int mid, t_sv *sv);
int         ft_down(int mid, t_sv *sv);
#endif
