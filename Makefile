# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbayard <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/22 12:19:12 by bbayard           #+#    #+#              #
#    Updated: 2021/10/22 12:19:17 by bbayard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_atoi.c ft_split.c ft_bzero.c\
			ft_strchr.c ft_calloc.c ft_strdup.c\
			ft_isalnum.c ft_striteri.c ft_isalpha.c\
			ft_strjoin.c ft_isascii.c ft_strlcat.c\
			ft_isdigit.c ft_strlcpy.c ft_isprint.c\
			ft_strlen.c ft_itoa.c ft_strmapi.c\
			ft_memchr.c ft_strncmp.c ft_memcmp.c\
			ft_strnstr.c ft_memcpy.c ft_strrchr.c\
			ft_memmove.c ft_strtrim.c ft_memset.c\
			ft_substr.c ft_putchar_fd.c ft_tolower.c\
			ft_putendl_fd.c ft_toupper.c ft_putnbr_fd.c\
			ft_putstr_fd.c

SRCS_B	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\
			ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c\
			ft_lstclear.c ft_lstiter.c ft_lstmap.c

HEADER	=	./
HEAD	=	libft.h
OBJ		=	$(patsubst %.c, %.o, $(SRCS))
OBJ_B	=	$(patsubst %.c, %.o, $(SRCS_B))

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -I$(HEADER)

.PHONY	:	all clean fclean re 

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(HEAD)
			ar rcs $(NAME) $?
%.o : %.c	$(HEAD)
			$(CC) $(CFLAGS) -c $< -o $@	

bonus 	:
			make OBJ="$(OBJ_B)" all

clean	:	
		@rm -f $(OBJ) $(OBJ_B)

fclean	:	clean
			@$(RM) $(NAME)

re		:	fclean all
