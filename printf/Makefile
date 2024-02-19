NAME = libftprintf.a
CC = cc
CCFLAGS = -Wall -Werror -Wextra
DEPENDS = libftprintf.a libft.a

OBJ = ft_count.o ft_printf.o pf_putstr.o pf_putnbr.o pf_puthex.o pf_uputnbr.o pf_hex.o

${NAME}:${OBJ}
	@ar rc ${NAME} ${OBJ}

%.o:%.c libft.h ft_printf.h Makefile
	@${CC} ${CCFLAGS} -c $<

all: ${NAME}

clean:
	@rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean clean

comp: all
	@${CC} ${CCFLAG} ${DEPENDS} main.c
	@./a.out

ex: comp clean
	./a.out

.PHONY: all re clean fclean
