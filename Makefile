# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ggranule <ggranule@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/10 12:30:09 by ggranule          #+#    #+#              #
#    Updated: 2021/10/17 16:14:36 by ggranule         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRCS 		= 	ft_isalpha.c\
				ft_isdigit.c\
				ft_isalnum.c\
				ft_isascii.c\
				ft_isprint.c\
				ft_strlen.c\
				ft_memset.c\
				ft_bzero.c\
				ft_memcpy.c\
				ft_memmove.c\
				ft_strlcpy.c\
				ft_strlcat.c\
				ft_toupper.c\
				ft_tolower.c\
				ft_strchr.c\
				ft_strrchr.c\
				ft_strncmp.c\
				ft_memchr.c\
				ft_memcmp.c\
				ft_strnstr.c\
				ft_atoi.c\
				ft_calloc.c\
				ft_strdup.c\
				ft_substr.c\
				ft_strjoin.c\
				ft_strtrim.c\
				ft_split.c\
				ft_itoa.c\
				ft_strmapi.c\
				ft_striteri.c\
				ft_putchar_fd.c\
				ft_putstr_fd.c\
				ft_putendl_fd.c\
				ft_putnbr_fd.c

SRCS_BONUS	= 	ft_lstnew_bonus.c\
				ft_lstadd_front_bonus.c\
				ft_lstsize_bonus.c\
				ft_lstlast_bonus.c\
				ft_lstadd_back_bonus.c\
				ft_lstdelone_bonus.c\
				ft_lstclear_bonus.c\
				ft_lstiter_bonus.c\
				ft_lstmap_bonus.c\

OBJ_BONUS = $(patsubst %.c,%.o,$(SRCS_BONUS))

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

HEADER = libft.h

OBJ = $(patsubst %.c,%.o,$(SRCS))

all:  ${NAME}

${NAME}: ${OBJ}
			ar rcs ${NAME} ${OBJ} ${HEADER}

%.o : %.c ${HEADER}
		${CC} ${CFLAGS} -c $< -o $@

bonus: ${OBJ} ${OBJ_BONUS}
		ar rcs ${NAME} ${OBJ} ${OBJ_BONUS} ${HEADER}

clean:
		${RM} *.o *.h.gch

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus