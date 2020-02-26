# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/24 21:41:48 by tpokalch          #+#    #+#              #
#    Updated: 2018/11/10 22:07:48 by tpokalch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: ft_putchar ft_putstr ft_strcmp ft_strlen ft_swap libft

ft_swap:
	 gcc -c srcs/ft_swap.c -I includes/*.h

ft_putchar:
	 gcc -c srcs/ft_putchar.c -I includes/*.h

ft_strcmp:
	 gcc -c srcs/ft_strcmp.c -I includes/*.h

ft_strlen:
	 gcc -c srcs/ft_strlen.c -I includes/*.h

ft_putstr:
	 gcc -c srcs/ft_putstr.c -I includes/*.h

libft:
	 ar rc libft.a ft_swap.o ft_putchar.o ft_strcmp.o ft_strlen.o ft_putstr.o

clean:
	 rm -rf *.o

fclean: clean
	 rm -rf libft.a

re: fclean all
