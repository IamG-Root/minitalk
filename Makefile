# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scastagn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/20 08:41:14 by scastagn          #+#    #+#              #
#    Updated: 2023/02/20 08:41:17 by scastagn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	gcc
FLAGS	=	-Wall -Wextra -Werror
INCLUDE	=	-I include
LIBFT	=	make -C libft
LIB		=	libft/libft.a
SERVER	=	server.c server_functions.c utils.c 
CLIENT	=	client.c client_functions.c 
SERVER_SRCS	=	$(SERVER)
CLIENT_SRCS	=	$(CLIENT)
SERVER_OBJS	=	$(SERVER_SRCS:.c=.o)
CLIENT_OBJS	=	$(CLIENT_SRCS:.c=.o)
NAME	=	minitalk

all: $(NAME)

$(NAME): libft ft_server ft_client

libft:
		$(LIBFT)
ft_server: $(SERVER_OBJS)
		$(CC) $(FLAGS) $(SERVER_OBJS) $(LIB) -o server
ft_client: $(CLIENT_OBJS)
		$(CC) $(FLAGS) $(CLIENT_OBJS) $(LIB) -o client
.c.o:
		${CC} ${FLAGS} $(INCLUDE) -c $< -o ${<:.c=.o}
clean:
		rm -rf $(CLIENT_OBJS) $(SERVER_OBJS)
		make clean -C libft
fclean: clean
		rm -rf server client
		make fclean -C libft
re:		fclean all
.PHONY:		all minitalk server client clean fclean re libft
