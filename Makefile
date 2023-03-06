# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spetrov <gyser.petrov.42@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/11 12:27:30 by spetrov           #+#    #+#              #
#    Updated: 2023/02/27 15:08:01 by spetrov          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	ft_bzero.c \
			ft_c_str.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isprint.c \
			ft_c_count.c \
			ft_calloc.c \
			ft_itoa.c \
			ft_memset.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memchr.c \
			ft_memmove.c \
			ft_memchr.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_striteri.c \
			ft_atoi.c \

BSRC	= ft_lstnew_bonus.c \
		  ft_lstadd_front_bonus.c \
		  ft_lstadd_back_bonus.c \
		  ft_lstsize_bonus.c \
		  ft_lstlast_bonus.c \
		  ft_lstclear_bonus.c \
		  ft_lstdelone_bonus.c \
		  ft_lstiter_bonus.c \
		  ft_lstmap_bonus.c \

OBJ	= ${SRC:%.c=%.o}

BOBJ	= ${BSRC:%.c=%.o}

NAME	= libft.a

CC		= gcc
FLAGS	= -Wall -Wextra -Werror

RM		= rm -f

$(NAME):	${OBJ}
			${CC} ${FLAGS} -c ${SRC}
			ar rc ${NAME} ${OBJ} libft.h

all:		${NAME} bonus

clean:
			${RM} ${OBJ} ${BOBJ}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

bonus:		${BOBJ}
			${CC} ${FLAGS} -c ${BSRC}
			ar rc ${NAME} ${BOBJ} libft.h

.PHONY:		all clean fclean re