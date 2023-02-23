# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spetrov <gyser.world@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/11 12:27:30 by spetrov           #+#    #+#              #
#    Updated: 2023/02/11 12:27:30 by spetrov          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_bzero.c \
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

BSRCS	= ft_lstnew_bonus.c \
		  ft_lstadd_front_bonus.c \
		  ft_lstadd_back_bonus.c \
		  ft_lstsize_bonus.c \
		  ft_lstlast_bonus.c \
		  ft_lstclear_bonus.c \
		  ft_lstdelone_bonus.c \
		  ft_lstiter_bonus.c \
		  ft_lstmap_bonus.c \

OBJS	= ${SRCS:%.c=%.o}

BOBJS	= ${BSRCS:%.c=%.o}

NAME	= libft.a

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

$(NAME):	${OBJS}
			${CC} ${CFLAGS} -c ${SRCS}
			ar rc ${NAME} ${OBJS} libft.h

all:		${NAME} bonus

clean:
			${RM} ${OBJS} ${BOBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

bonus:		${BOBJS}
			${CC} ${CFLAGS} -c ${BSRCS}
			ar rc ${NAME} ${BOBJS} libft.h

.PHONY:		all clean fclean re