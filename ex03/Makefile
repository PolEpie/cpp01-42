# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pepie <pepie@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/01 16:22:42 by pepie             #+#    #+#              #
#    Updated: 2024/11/08 17:25:57 by pepie            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	humans

CPP			=	c++
INCLUDE 	=	./includes/
CFLAGS		=	-Wall -Werror -Wextra -std=c++98 -I$(INCLUDE)
RM			=	rm -f
OBJ_DIR		=	objs
SRCS		=	main.cpp \
				HumanA.cpp \
				HumanB.cpp \
				Weapon.cpp


OBJS		=	$(SRCS:/%.cpp=%.o)

OS_NAME		:=	$(shell uname -s | tr A-Z a-z)

$(NAME):		$(OBJS)
				$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)


all:			$(NAME)
 
bonus:			all

.c.o:
				@$(CPP) $(CFLAGS) -c $< -o $(OBJ_DIR)/$(<:.c=.o)
				@echo "Compiling $<."

localclean:
				@$(RM) -rf $(OBJ_DIR)
				@mkdir $(OBJ_DIR)
				@echo "Removed object files."

clean:			localclean

fclean:			localclean
				@$(RM) $(NAME)
				@echo "Removed executable."

re:				fclean all

.PHONY:			all clean fclean re localclean bonus 