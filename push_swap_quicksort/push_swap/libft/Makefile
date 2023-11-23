# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/06 16:59:09 by facetint          #+#    #+#              #
#    Updated: 2023/11/22 12:29:22 by mulken           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
CC	=	gcc
CFLAGS	=	-Wall -Wextra -Werror
RM	=	rm -f
SRC	=	ft_isdigit.c ft_split.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
			ar rcs $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ) $(B_OBJ)

fclean:	clean
			$(RM) $(NAME)

re:	fclean $(NAME)

.PHONY: all clean fclean re
