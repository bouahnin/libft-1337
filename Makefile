# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bouahnin <bouahnin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/17 15:59:36 by bouahnin          #+#    #+#              #
#    Updated: 2025/10/25 15:51:53 by bouahnin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INCL_DIR = .
M_SRCS = ft_isascii.c ft_memmove.c ft_split.c ft_strlcpy.c ft_strtrim.c \
ft_atoi.c ft_isdigit.c ft_memset.c ft_strchr.c ft_strlen.c ft_substr.c \
ft_bzero.c ft_isprint.c ft_putchar_fd.c ft_strdup.c ft_strmapi.c ft_tolower.c \
ft_calloc.c ft_itoa.c ft_memchr.c ft_putendl_fd.c ft_striteri.c ft_strncmp.c ft_toupper.c \
ft_isalnum.c ft_memcmp.c ft_putnbr_fd.c ft_strjoin.c ft_strnstr.c \
ft_isalpha.c ft_memcpy.c ft_putstr_fd.c ft_strlcat.c ft_strrchr.c

B_SRCS = ft_lstadd_front.c ft_lstadd_back.c ft_lstnew.c ft_lstsize.c ft_lstlast.c \
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

M_OBJS = $(M_SRCS:.c=.o)
B_OBJS = $(B_SRCS:.c=.o)
CC = cc
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(M_OBJS)
	ar rcs $(NAME) $(M_OBJS)

%.o: %.c
	$(CC) -c $(FLAGS) -I$(INCL_DIR) $< -o $@

bonus: $(B_OBJS)
	ar rcs libft.a $^

$(B_OBJS): %.o: %.c
	$(CC) -c $(FLAGS) -I$(INCL_DIR) $< -o $@

clean:
	rm -f $(B_OBJS) $(M_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
