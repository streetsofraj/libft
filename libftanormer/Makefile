# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msandana <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/04 14:39:12 by msandana          #+#    #+#              #
#    Updated: 2021/03/05 13:55:14 by msandana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c ft_split.c \
					ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
					ft_itoa.c ft_memcpy.c  ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
					ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c ft_memccpy.c \
					ft_memmove.c ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c \
					ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c  \
					ft_putstr_fd.c  ft_strjoin.c ft_strmapi.c ft_strtrim.c

OBJS	= $(SRCS:.c=.o)
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f
NAME	= libft.a

HEADER	=	libft.h
HFLAG	=	-I $(HEADER)

%.o: %.c $(HEADER)
	gcc $(CFLAGS) $(HFLAG) -o $@ -c $<

$(NAME):	$(OBJS)
		ar -rc $(NAME) $(OBJS)
		ranlib $(NAME)

all:	$(NAME)
clean:
		$(RM) $(OBJS)
		$(RM) $(NAME)
fclean:	clean
re:		fclean all

.PHONY:	all clean fclean re
