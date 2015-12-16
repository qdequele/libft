#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qdequele <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/25 14:30:45 by qdequele          #+#    #+#              #
#    Updated: 2015/12/08 10:45:09 by qdequele         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

#Define the libft
NAME			= 	libft.a
LIBFT_SRC		= 	ft_bzero.c\
					ft_strlen.c\
					ft_isprint.c\
					ft_isalnum.c\
					ft_isascii.c\
					ft_isalpha.c\
					ft_isdigit.c\
					ft_toupper.c\
					ft_tolower.c\
					ft_strcat.c\
					ft_strncat.c\
					ft_strlcat.c\
					ft_strdup.c\
					ft_strcpy.c\
					ft_strncpy.c\
					ft_strcmp.c\
					ft_strncmp.c\
					ft_strchr.c\
					ft_strrchr.c\
					ft_strstr.c\
					ft_strnstr.c\
					ft_memset.c\
					ft_memcpy.c\
					ft_memccpy.c\
					ft_memmove.c\
					ft_memchr.c\
					ft_memcmp.c\
					ft_atoi.c\
					ft_memdel.c\
					ft_memalloc.c\
					ft_putchar.c\
					ft_putstr.c\
					ft_putnbr.c\
					ft_striter.c\
					ft_striteri.c\
					ft_strdel.c\
					ft_strclr.c\
					ft_strmap.c\
					ft_strmapi.c\
					ft_strequ.c\
					ft_strnequ.c\
					ft_strsub.c\
					ft_strjoin.c\
					ft_strtrim.c\
					ft_strsplit.c\
					ft_strnew.c\
					ft_itoa.c\
					ft_putendl.c\
					ft_putchar_fd.c\
					ft_putstr_fd.c\
					ft_putendl_fd.c\
					ft_putnbr_fd.c\
					ft_lstnew.c\
					ft_lstdelone.c\
					ft_lstdel.c\
					ft_lstadd.c\
					ft_lstaddend.c\
					ft_lstiter.c\
					ft_lstmap.c\
					ft_nbrlen.c\
					ft_nbrlen_base.c\
					ft_isnegative.c\
					ft_wordlen.c\
					ft_wordcount.c\
					ft_strrev.c\
					ft_itoa_base.c

_LIBFT_O_FILES	= 	$(patsubst %.c,%.o, $(LIBFT_SRC))
LIBFT_O_FILES	= 	$(addprefix bin/,$(_LIBFT_O_FILES))
CFLAGS			=	-Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@mkdir bin
	@gcc -c $(CFLAGS) $(LIBFT_SRC)
	@ar rc $(NAME) $(_LIBFT_O_FILES)
	@ranlib $(NAME)
	@mv $(_LIBFT_O_FILES) bin/
	@echo "Library FT compilled"

clean:
	@rm -rf bin
	@echo "Clean all .o files"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "Clean all .o and .a"

re: fclean all
