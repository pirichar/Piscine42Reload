# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/23 12:58:56 by pirichar          #+#    #+#              #
#    Updated: 2024/04/23 13:00:14 by pirichar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC			= src
INC			= include
OBJ			= obj
CFILES		= ft_display_file.c
OFILES		= $(CFILES:.c=.o)
SRCS		= $(addprefix $(SRC)/, $(CFILES))
OBJS		= $(addprefix $(OBJ)/, $(OFILES))

CC			= gcc
CFLAGS		= -Wall -Werror -Wextra -g -O3
RM			= rm -rf

$(OBJ)/%.o:	$(SRC)/%.c
			$(CC) $(CFLAGS) -c $< -o  $@


$(NAME):	$(OBJ) $(OBJS)
			$(CC) $(OBJS)  -o $(NAME)

$(OBJ):
			@mkdir -p $(OBJ)

all:		$(NAME)

clean:
			@$(RM) $(OBJS) $(OBJ)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

norme:
			norminette $(SRCS) 

	
