# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skang <skang@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/02 18:02:39 by skang             #+#    #+#              #
#    Updated: 2020/04/10 21:49:57 by skang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
SRCS = ft_isalpha.c ft_memcmp.c	ft_putstr_fd.c ft_strlen.c ft_tolower.c \
       ft_isascii.c ft_memcpy.c ft_strmapi.c ft_toupper.c \
       ft_isdigit.c ft_memmove.c ft_strchr.c ft_strncmp.c ft_atoi.c \
       ft_isprint.c ft_memset.c	ft_strdup.c ft_strnstr.c ft_bzero.c \
       ft_itoa.c ft_putchar_fd.c ft_strjoin.c ft_strrchr.c ft_calloc.c \
       ft_memccpy.c ft_putendl_fd.c ft_strlcat.c ft_strtrim.c ft_isalnum.c \
       ft_memchr.c ft_putnbr_fd.c ft_strlcpy.c ft_substr.c ft_split.c 

OBJS = ft_isalpha.o ft_memcmp.o	ft_putstr_fd.o ft_strlen.o ft_tolower.o \
       ft_isascii.o ft_memcpy.o ft_strmapi.o ft_toupper.o \
       ft_isdigit.o ft_memmove.o ft_strchr.o ft_strncmp.o ft_atoi.o \
       ft_isprint.o ft_memset.o	ft_strdup.o ft_strnstr.o ft_bzero.o \
       ft_itoa.o ft_putchar_fd.o ft_strjoin.o ft_strrchr.o ft_calloc.o \
       ft_memccpy.o ft_putendl_fd.o ft_strlcat.o ft_strtrim.o ft_isalnum.o \
       ft_memchr.o ft_putnbr_fd.o ft_strlcpy.o ft_substr.o ft_split.o

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
	ft_lstmap.c

BONUS_OBJS = ft_lstnew.o ft_lstadd_front.o ft_lstsize.o ft_lstlast.o \
	ft_lstadd_back.o ft_lstdelone.o ft_lstclear.o ft_lstiter.o \
	ft_lstmap.o

CFLAGS = -Wall -Wextra -Werror
all : $(NAME)

$(NAME) : $(OBJS)
	ar rc $@ $^

bonus: $(BONUS_OBJS)
	ar rc $(NAME) $^

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@


clean :
	@/bin/rm -f $(OBJS) $(BONUS_OBJS)

fclean : clean
	@/bin/rm -f $(NAME)

re : fclean all
