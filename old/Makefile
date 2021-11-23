# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stelie <stelie@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/06 10:55:56 by stelie            #+#    #+#              #
#    Updated: 2019/11/11 11:49:18 by stelie           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

H_DIR	= .

S_DIR	= ft_bzero.c\
			ft_isalnum.c\
			ft_calloc.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_atoi.c\
			ft_memchr.c\
			ft_memcpy.c\
			ft_memccpy.c\
			ft_memset.c\
			ft_memcmp.c\
			ft_memmove.c\
			ft_strchr.c\
			ft_strdup.c\
			ft_strlcpy.c\
			ft_strlen.c\
			ft_strlcat.c\
			ft_tolower.c\
			ft_strnstr.c\
			ft_strncmp.c\
			ft_toupper.c\
			ft_strrchr.c\
			ft_substr.c\
			ft_strjoin.c\
			ft_strtrim.c\
			ft_split.c\
			ft_itoa.c\
			ft_strmapi.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c

B_DIR	=	ft_lstnew_bonus.c\
			ft_lstadd_front_bonus.c\
			ft_lstsize_bonus.c\
			ft_lstlast_bonus.c\
			ft_lstadd_back_bonus.c\
			ft_lstdelone_bonus.c\
			ft_lstclear_bonus.c\
			ft_lstiter_bonus.c\

OBJS	= ${S_DIR:.c=.o}
OBJBONUS = ${B_DIR:.c=.o}
OPTION	= -I${H_DIR}

CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f
AR		= ar rc

.c.o:
			gcc ${CFLAGS} ${OPTION} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			${AR} ${NAME} ${OBJS} 

bonus:		${NAME} ${OBJBONUS}
			${AR} ${NAME} ${OBJBONUS}

all:		${NAME}

clean:
			${RM} ${OBJS} ${OBJBONUS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re bonus
