# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paumarc2 <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/28 09:49:29 by paumarc2          #+#    #+#              #
#    Updated: 2023/03/28 09:49:36 by paumarc2         ###   ########.fr        #
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

CC				=	@gcc

CFLAGS		=	-Wall -Wextra -Werror

MAKEFLAG		+=	--no-print-directory

LDFLAGS		=	-L. -lprintf -L./src/libft -lft

AR				=	@ar rc

RAN			=	@ranlib

NAME			=	libmy_lib.a

SRC_DIR		=	src

OBJ_DIR		=	obj

SRCS			=	$(addprefix $(SRC_DIR)/, 							 \
				printf/parsing_hexa.c 									 \
				printf/parsing_string.c 								 \
				printf/printf.c 										 	 \
				printf/parsing_decimal.c 								 \
				printf/parsing_size_t.c 								 \
				printf/parsing_unsigned.c								 \
				get_next_line/get_next_line.c							 \
				get_next_line/get_next_line_utils.c					 \
				get_next_line/get_next_line_bonus.c					 \
				get_next_line/get_next_line_utils_bonus.c			 \
				libft/ft_atoi.c									       \
				libft/ft_bzero.c    							          \
				libft/ft_calloc.c 							          \
				libft/ft_isalnum.c  							          \
				libft/ft_isalpha.c 							          \
				libft/ft_isascii.c 							          \
				libft/ft_isdigit.c   							       \
				libft/ft_isprint.c   							       \
				libft/ft_itoa.c        							       \
				libft/ft_memchr.c      							       \
				libft/ft_memcmp.c      							       \
				libft/ft_memcpy.c      							       \
				libft/ft_memmove.c     							       \
				libft/ft_memset.c      							       \
				libft/ft_putchar_fd.c  							       \
				libft/ft_putendl_fd.c  							       \
				libft/ft_putnbr_fd.c   							       \
				libft/ft_putstr_fd.c   							       \
				libft/ft_split.c       							       \
				libft/ft_strchr.c      							       \
				libft/ft_strdup.c      							       \
				libft/ft_striteri.c    							       \
				libft/ft_strjoin.c      							    \
				libft/ft_strlcat.c      							    \
				libft/ft_strlcat.c     							       \
				libft/ft_strlcpy.c      							    \
				libft/ft_strlen.c       							    \
				libft/ft_strmapi.c      							    \
				libft/ft_strncmp.c      							    \
				libft/ft_strnstr.c      							    \
				libft/ft_strrchr.c      							    \
				libft/ft_strtrim.c      							    \
				libft/ft_substr.c       							    \
				libft/ft_tolower.c      							    \
				libft/ft_toupper.c      							    \
				libft/ft_putstr.c		  							   	 \
				libft/ft_putnbr.c		  									 \
				libft/ft_strstr.c		  							   	 \
				libft/ft_lstnew.c     							       \
				libft/ft_lstadd_front.c 							    \
				libft/ft_lstsize.c      							    \
				libft/ft_lstlast.c      							    \
				libft/ft_lstadd_back.c  							    \
				libft/ft_lstdelone.c    							    \
				libft/ft_lstclear.c     							    \
				libft/ft_lstiter.c      							    \
				libft/ft_lstmap.c 	     								 \
				libft/ft_swap.c)


OBJS		=	$(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

HEADER	=	include/headerprintf.h

PATH_INC =	./include/

all: $(NAME)

$(NAME): $(OBJS) 
	 $(AR) $(NAME) $(OBJS)
	 $(RAN) $(NAME)
	 @echo "\n				        $(LIGHT_GREEN)UPDATE  PRINTF       ...$(END)\n"
	 @echo "\n						$(LIGHT_GREEN)... $(END)"
	 @echo "\n				        $(LIGHT_GREEN)UPDATE  LIBFT       ...$(END)\n"
	 @echo "\n						$(LIGHT_GREEN)... $(END)"
	 @echo "\n				        $(LIGHT_GREEN)UPDATE GET_NEXT_LINE ...$(END)\n"
	 @echo "$(LIGHT_RED)         __      __        .__  $(LIGHT_YELLOW).__              $(LIGHT_GREEN).__          $(LIGHT_BLUE)           ._.$(LIGHT_PURPLE)_._.	$(END)"
	 @echo "$(LIGHT_RED)        /  \    /  \ ____  |  | $(LIGHT_YELLOW)|  |     ______  $(LIGHT_GREEN)|  | _____  $(LIGHT_BLUE) ___.__.   | |$(LIGHT_PURPLE) | |	$(END)"
	 @echo "$(LIGHT_RED)        \   \/\/   // __ \ |  | $(LIGHT_YELLOW)|  |     \____ \ $(LIGHT_GREEN)|  | \__  \ $(LIGHT_BLUE)<   |  |   | |$(LIGHT_PURPLE) | |	$(END)"
	 @echo "$(LIGHT_RED)         \        /\  ___/ |  |_$(LIGHT_YELLOW)|  |__   |  |_> >  $(LIGHT_GREEN) |__/ __ \ $(LIGHT_BLUE) \___ |    \|$(LIGHT_PURPLE)\|\|	$(END)"
	 @echo "$(LIGHT_RED)          \__/\  /  \___   >____/$(LIGHT_YELLOW)____/   |   __/ $(LIGHT_GREEN)|____(__   / $(LIGHT_BLUE)/ ____|    __$(LIGHT_PURPLE)____	$(END)"
	 @echo "$(LIGHT_RED)               \/       \/       $(LIGHT_YELLOW)        |__|    $(LIGHT_GREEN)         \/ $(LIGHT_BLUE) \/         \/$(LIGHT_PURPLE)\/\/   $(END)"
	 @echo "$(LIGHT_GREEN)                                                                                                 							$(END)"
	 @echo "$(LIGHT_GREEN)                                                                                            	    						$(END)"
	 @echo "$(LIGHT_PURPLE)   _____  .__  .__      $(LIGHT_BLUE).__                  $(LIGHT_GREEN)                       $(LIGHT_YELLOW).__.__             .___ $(LIGHT_RED)._._._.	$(END)"
	 @echo "$(LIGHT_PURPLE)  /  _  \ |  | |  |     $(LIGHT_BLUE)|__| ______     ___   $(LIGHT_GREEN) ____   _____ ______  $(LIGHT_YELLOW)|__|  |   ____   __| _/ $(LIGHT_RED)| | | |	$(END)"
	 @echo "$(LIGHT_PURPLE) /  /_\  \|  | |  |     $(LIGHT_BLUE)|  |/  ___/   _/ ___\ $(LIGHT_GREEN)/  _ \ /     \ __ __\ $(LIGHT_YELLOW)|  |  | _/ __ \ / __ |  $(LIGHT_RED)| | | |	$(END)"
	 @echo "$(LIGHT_PURPLE)/    |    \  |_|  |__   $(LIGHT_BLUE)|  |\___ \    \  \__ $(LIGHT_GREEN)(  <_> )  Y Y  \  |_> > $(LIGHT_YELLOW)  |  |_\  ___// /_/ |  $(LIGHT_RED) \|\|\|	$(END)"
	 @echo "$(LIGHT_PURPLE)\__ _|__  /____/____/   $(LIGHT_BLUE)|__/____  >    \___  > $(LIGHT_GREEN)____/|__|_|  /   __/ $(LIGHT_YELLOW)|__|____/\___  >____ |  $(LIGHT_RED) ______	$(END)"
	 @echo "$(LIGHT_PURPLE)        \/              $(LIGHT_BLUE)        \/         \/ $(LIGHT_GREEN)            \/|__|   $(LIGHT_YELLOW)             \/     \/   $(LIGHT_RED)\/\/\/	$(END)"


$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -I$(PATH_INC) -c $< -o $@


clean:
	@rm -rf $(OBJ_DIR)
	@echo "\n					$(RED)DELETION .o LIBFT         ... $(END)"
	@echo "\n					$(RED)	... $(END)"
	@echo "\n					$(RED)DELETION .o PRINTF        ... $(END)"
	@echo "\n					$(RED)	... $(END)"
	@echo "\n					$(RED)DELETION .o GET_NEXT_LINE ... $(END)"

fclean: #clean
	@rm -f $(NAME)
	@echo "\n					$(RED)	... $(END)"
	@echo "\n					$(RED)DELETION LIBMY_LIB.A    ... $(END)"

re: fclean all

.PHONY: all clean fclean re

