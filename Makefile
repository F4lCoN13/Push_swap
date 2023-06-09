# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/31 12:03:00 by paumarc2          #+#    #+#              #
#    Updated: 2023/06/20 11:14:49 by paumarc2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BLACK = \033[0;30m
DARK_GRAY = \033[1;30m
RED = \033[0;31m
LIGHT_RED = \033[1;31m
GREEN = \033[0;32m
LIGHT_GREEN = \033[1;32m
YELLOW = \033[0;33m
LIGHT_YELLOW = \033[1;33m
BLUE = \033[0;34m
LIGHT_BLUE = \033[1;34m
GREEN = \033[0;35m
LIGHT_PURPLE = \033[1;35m
CYAN = \033[0;36m
LIGHT_CYAN = \033[1;36m
LIGHT_GRAY = \033[0;37m
WHITE = \033[1;37m
END = \033[0m

NAME = push_swap

MAKEFLAGS			+=		--no-print-directory

SRC_DIR				=		file_push_swap

OBJ_DIR				=		obj

CC						=		gcc

CFLAGS				=		-Wall -Wextra -Werror -g3

LDFLAGS				=		lib/libmy_lib.a 

SRCS					=		$(addprefix $(SRC_DIR)/, 					   		\
								all_main/main.c								   		\
								all_main/main_lst.c							         \
                        all_main/main_algo.c                            \
								error_handling/find_error.c							\
								error_handling/find_error_additional.c				\
								chain_lists/init_list.c						   		\
								chain_lists/init_indexing_int.c						\
								chain_lists/instruction_distribution.c				\
								chain_lists/delete_chain.c				   			\
								chain_lists/sa.c					      				\
								chain_lists/pa.c			      						\
								chain_lists/ra.c	      								\
								chain_lists/rra.c                               \
								algo/util_1.c												\
								algo/util_2.c												\
								algo/roulement.c												\
								algo/tiny_sort.c												\
								algo/algo_10.c												\
								algo/find_sa.c												\
								algo/all_inter.c											\
                        algo/algo_3_and_5.c)

OBJS					=		$(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

HEADER				=		include/headerpush_swap.h

PATH_INC				=		./include/

all:		lib $(NAME)

$(NAME):	$(OBJS)
	      $(CC) $(CFLAGS)  $(OBJS) $(LDFLAGS) -o $(NAME)
	      @echo "\n				        $(LIGHT_GREEN)CREATION OF EXEC PUSH_SWAP ...$(END)\n"


lib:
			 @echo "$(YELLOW)Lauch Makefile lib ...$(END)"
			 @make -C lib/
			 @echo "\n\n\n$(LIGHT_GREEN)lib is ready  $(END)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER)
			 @mkdir -p $(@D)
			 $(CC) $(CFLAGS) -I$(PATH_INC) -c $< -o $@

clean:
			 @rm -rf $(OBJ_DIR)
			 @echo "\n					$(RED)DELETION .o PUSH_SWAP ... $(END)"
			 @make -C lib/ clean

fclean:	clean
			 @rm -f $(NAME)
			 @make -C lib/ fclean
			 @echo "\n					$(RED)DELETION EXEC PUSH_SWAP    ... $(END)"

re:	fclean all

.PHONY: all clean fclean re lib
#								chain_lists/init_list.c								\
