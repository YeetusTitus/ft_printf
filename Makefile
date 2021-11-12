SRCS = ft_printf.c ft_putchar.c ft_putascii.c ft_putnbr_base.c ft_putnbr.c ft_putunbr.c ft_putstr.c ft_putlong_base.c ft_putbase_utils.c

DIRECTORYS = srcs/

SRCSD =	$(addprefix ${DIRECTORYS}, $(SRCS))

OBJS =	${SRCSD:.c=.o}

EFLAGS = -Wall -Wextra -Werror

HEADER = include/ft_printf.h

OFLAGS = -c

NAME   = libftprintf.a

%.o: %.c ${HEADER}
	gcc ${OFLAGS} ${EFLAGS} -o $@ $<

${NAME}: ${OBJS}
		 ar -rcs ${NAME} ${OBJS} 
			
all:	${NAME}

clean:
		rm  -f ${OBJS}

fclean:	clean
		rm  -f ${NAME}

re:		fclean all

.PHONY:	all clean fclean re
