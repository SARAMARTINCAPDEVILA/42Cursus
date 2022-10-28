#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 17:46:28 by smartin           #+#    #+#              #
#    Updated: 2022/10/28 17:04:54 by smartin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libftprintf.a

HEADER =	ft_printf.h

CFLAGS =	-Wall -Wextra -Werror

MKF =		Makefile

CC =	 	gcc

RM =	 	rm -f

LIBC = 		ar -rcs

SRCS =		ft_printf.c\
			ft_printchar.c\
	 		ft_printstr.c\
   	  		ft_printdigit.c\
			ft_printhex.c\
			ft_printpoint.c\
			ft_printuns.c

OBJS = 		${SRCS:.c=.o}

DEPS = 		${SRCS:.c=.d}

%.o:%.c 	$(MKF)
			@${CC} ${CFLAGS} -MMD -c $< -o $@
			@printf "\r➡️   $(GRAY)${CC} ${CFLAGS} -I./ -c $< -o $@$(DEF_COLOR)"
all:
			@$(MAKE) $(NAME)

$(NAME)::	${OBJS} ${HEADER}
			$(LIBC) $(NAME) $(OBJS)

$(NAME)::
			@printf "👏COMPILA!\n"

fclean:
			@$(MAKE) clean
			@$(RM) $(NAME) $(DEPS)
			@echo "🧹LIMPITO\n"

clean:
			@$(RM) $(OBJS)

re: fclean all

.PHONY: all clean fclean re
