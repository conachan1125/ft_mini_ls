# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmomose <tmomose@student.42tokyo.j>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/04 01:12:50 by tmomose           #+#    #+#              #
#    Updated: 2020/12/04 21:05:32 by tmomose          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_mini_ls

CC = gcc
CFLAGS = -Wall -Werror -Wextra

LIBS = libft/
LIBFT = libft/libft.a

SRCS = ft_mini_ls.c \
	   ft_mini_ls_utils.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT)

$(LIBFT):FORCE
	@make -C $(LIBS)

clean:
	@make clean -C $(LIBS)
	rm -f $(OBJS)

fclean: clean
	@make fclean -C $(LIBS)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re FORCE
