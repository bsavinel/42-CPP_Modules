# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/08 15:48:47 by bsavinel          #+#    #+#              #
#    Updated: 2022/07/08 22:35:19 by bsavinel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp	\
			Base.cpp	\

OBJS	= 	$(SRCS:.cpp=.o)
DEPS	=	$(SRCS:.cpp=.d)

NAME = True_type

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD

CC = c++

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(DEPS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re