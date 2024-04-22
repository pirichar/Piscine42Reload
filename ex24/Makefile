# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 10:54:44 by pirichar          #+#    #+#              #
#    Updated: 2024/04/22 11:04:42 by pirichar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC			= src
INC			= include
OBJ			= obj
CFILES =  ft_putchar.c			\
	   ft_putstr.c			\
	   ft_strcmp.c		\
	   ft_strlen.c		\
	   ft_swap.c			\
HFILES		= ft_abs.h ft_point.h
OFILES		= $(CFILES:.c=.o)
SRCS		= $(addprefix $(SRC)/, $(CFILES))
OBJS		= $(addprefix $(OBJ)/, $(OFILES))
HEADERS		= $(addprefix $(INC)/, $(HFILES))

CC = gcc
CFLAGS = -Wall -Werror -Wextra 

.c.o : 
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean :
	/bin/rm -f $(OBJS) $(OBJSB)

fclean : clean
	/bin/rm -f $(NAME)
	
re : fclean all

norme:
			norminette $(SRCS) $(HEADERS)
	
