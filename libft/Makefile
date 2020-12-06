# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmomose <tmomose@student.42tokyo.j>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/03 14:34:12 by tmomose           #+#    #+#              #
#    Updated: 2020/12/04 21:09:48 by tmomose          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -g -Wall -Wextra -Werror -I $(INC_DIR)

SRC_DIR = ./
SRCS = $(addprefix $(SRC_DIR), $(SRC))
SRC = ft_atoi.c \
	  ft_bzero.c \
	  ft_calloc.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_memccpy.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memcpy.c \
	  ft_memmove.c \
	  ft_memset.c \
	  ft_strchr.c \
	  ft_strdup.c \
	  ft_strlcat.c \
	  ft_strlcpy.c \
	  ft_strlen.c \
	  ft_strncmp.c \
	  ft_strnstr.c \
	  ft_strrchr.c \
	  ft_tolower.c \
	  ft_toupper.c \
	  ft_substr.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_split.c \
	  ft_itoa.c \
	  ft_strmapi.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_strfsort.c \
	  ft_count_div.c \
	  ft_swap.c \
	  ft_putdiv.c \
	  ft_putstr.c \
	  ft_putchar.c \
	  ft_freediv.c \
	  ft_strcmp.c
BONUS_SRCS = $(addprefix $(SRC_DIR), $(BONUS_SRC))
BONUS_SRC = ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c
OBJ = $(SRC:.c=.o)
OBJS = $(addprefix $(SRC_DIR), $(OBJ))
BONUS_OBJ = $(BONUS_SRC:.c=.o)
BONUS_OBJS = $(addprefix $(SRC_DIR), $(BONUS_OBJ))
INC_DIR = ./
INCS = $(addprefix $(INC_DIR), $(INC))
INC = libft.h

all: $(NAME)

$(NAME): $(OBJ:%.o=$(SRC_DIR)%.o) $(BONUS_OBJ:%.o=$(SRC_DIR)%.o)
	ar rc $(NAME) $(OBJS) $(BONUS_OBJS)
	ranlib $(NAME)


clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
