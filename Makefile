# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgerard <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/23 19:15:03 by dgerard           #+#    #+#              #
#    Updated: 2017/06/10 18:17:42 by dgerard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

FLAGS = -Wall -Werror -Wextra

LIBS = libs/libft/libft.a\
	   libs/minilibx/libmlx.a

SRCS = main.c\
	   draw_line.c\
	   key_controls.c\
	   draw_web.c\
	   read_file.c

FRAMEWORKS = -framework OpenGL -framework AppKit

OFILES = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OFILES)
	@gcc $(CFLAGS) -o $@ $(OFILES) $(LIBS) $(FRAMEWORKS)
	@echo "\033[32m[fdf created ( ͡° ͜ʖ ͡°)]\033[0m"
	@say -r 2 -v whisper oh yeah
	
%.o: %.c
	@gcc $(CFLAGS) -c $^ -o $@
	@/bin/echo -n "❂❂❂❂❂"

clean:
	@/bin/rm -f rm $(OFILES)
	@echo "\033[31m[.o files deleted (╯°□°）╯︵ ┻━┻ ]\033[0m"

fclean: clean
	@/bin/rm -f rm $(NAME)
	@echo "\033[31m[executable deleted ᕙ(⇀‸↼‶)ᕗ ]\033[0m"

re: fclean all
