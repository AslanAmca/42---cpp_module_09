# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/24 21:57:41 by aaslan            #+#    #+#              #
#    Updated: 2023/12/24 23:08:21 by aaslan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= btc
CXX			:= c++
CXXFLAGS	:= -Wall -Wextra -Werror -std=c++98
SRC			:= BitcoinExchange.cpp main.cpp

all: $(NAME)

$(NAME):
	@$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean:
	@rm -rf $(NAME)
	@clear

fclean: clean

re: fclean all

.PHONY: all clean fclean re