# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/23 05:44:59 by kali              #+#    #+#              #
#    Updated: 2024/06/25 09:38:04 by anurtiag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	phonebook


SRCS			=	main.cpp Brain.cpp Dog.cpp Cat.cpp Animal.cpp


OBJ				=	$(SRCS:.cpp=.o)


CC				=	c++


CFLAGS			=	-std=c++98 -Wall -Wextra -Werror


RM				=	rm -rf


all:			$(NAME)


$(NAME):		$(OBJ)
				@$(CC) $(CFLAGS) $(OBJ) $(LIBS) -o $(NAME)


%.o:			%.cpp
				$(CC) $(CFLAGS) -c $< -o $@


clean:
				@$(RM) $(OBJ)


fclean:			clean
				@$(RM) $(NAME)


re:				fclean all


.PHONY:			all clean fclean re