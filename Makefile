# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/06 18:15:48 by mtritsch          #+#    #+#              #
#    Updated: 2022/07/07 16:38:11 by mtritsch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_is/ft_isalpha.c ft_is/ft_isascii.c ft_is/ft_isdigit.c ft_is/ft_isalnum.c ft_is/ft_isprint.c \
		ft_to/ft_tolower.c ft_to/ft_toupper.c ft_to/ft_atoi.c ft_to/ft_itoa.c \
		ft_str/ft_strlen.c ft_str/ft_strdup.c ft_str/ft_substr.c ft_str/ft_strlcpy.c ft_str/ft_split.c ft_str/ft_strchr.c ft_str/ft_striteri.c ft_str/ft_strjoin.c ft_str/ft_strlcat.c ft_str/ft_strmapi.c ft_str/ft_strncmp.c ft_str/ft_strnstr.c ft_str/ft_strrchr.c ft_str/ft_strtrim.c \
		ft_put/ft_putchar_fd.c ft_put/ft_putstr_fd.c ft_put/ft_putendl_fd.c ft_put/ft_putnbr_fd.c \
		ft_mem/ft_bzero.c ft_mem/ft_calloc.c ft_mem/ft_memchr.c ft_mem/ft_memcmp.c ft_mem/ft_memcpy.c ft_mem/ft_memmove.c ft_mem/ft_memset.c \

BONUSSRCS = ft_lst/ft_lstadd_back.c ft_lst/ft_lstadd_front.c ft_lst/ft_lstclear.c ft_lst/ft_lstdelone.c ft_lst/ft_lstiter.c ft_lst/ft_lstlast.c ft_lst/ft_lstmap.c ft_lst/ft_lstnew.c ft_lst/ft_lstsize.c \

PRINTFSRCS = ft_printf/ft_printf.c ft_printf/hexa.c ft_printf/u_int.c ft_printf/ptr.c ft_printf/utils.c \

GNLSRCS = get_next_line/get_next_line.c get_next_line/get_next_line_utils.c \

NAME	= libft.a

OBJS	= ${SRCS:.c=.o}

BONUSOBJS = ${BONUSSRCS:.c=.o}

PRINTFOBJS = ${PRINTFSRCS:.c=.o}

GNLOBJS = ${GNLSRCS:.c=.o}

.c.o  :
	gcc -Wall -Wextra -Werror -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
	ar rc ${NAME} ${OBJS}

all : ${NAME}

bonus : ${BONUSOBJS}
	ar rc ${NAME} ${BONUSOBJS}

printf : ${PRINTFOBJS}
	ar rc ${NAME} ${PRINTFOBJS}

gnl : ${GNLOBJS}
	ar rc ${NAME} ${GNLOBJS}

clean :
	rm -f ${OBJS}

fclean : clean bclean pclean gclean
	rm -f ${NAME}

bclean :
	rm -f ${BONUSOBJS}

pclean :
	rm -f ${PRINTFOBJS}

gclean :
	rm -f ${GNLOBJS}

re : fclean all
