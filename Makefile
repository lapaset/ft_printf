# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llahti <llahti@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/16 16:29:38 by llahti            #+#    #+#              #
#    Updated: 2020/03/24 12:05:42 by llahti           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf_test
LIBNAME = libft.a
LIBDIR = libft
IDIR = includes
ODIR = objs
SDIR = srcs
_PRINTF = ft_printf.o list_convs.o print.o is_funcs.o create_conv.o add_flags.o\
print_cs.o print_di.o print_p.o print_unsigned.o print_f.o double_to_str.o\
style.o asterisk.o add_length_mod.o print_utilities.o main.o
OBJS = $(patsubst %, $(ODIR)/%, $(_PRINTF))

all: $(NAME)

$(ODIR)/%.o: $(SDIR)/%.c
	@[ -d $(ODIR) ] || mkdir -p $(ODIR)
	@gcc -Wall -Wextra -Werror -c -I $(IDIR)/ -o $@ $<

$(NAME): $(OBJS)
	@make -C $(LIBDIR)
	@gcc -o $(NAME) $(OBJS) $(LIBDIR)/$(LIBNAME)
	@echo "\033[1;32mprintf_test created\033[0m"

clean:
	@rm -f -r $(ODIR)
	@echo "\033[1;32mObjects removed\033[0m"
	@make -C $(LIBDIR) clean

fclean: clean
	@rm -f $(NAME)
	@echo "\033[1;32mprintf_test removed\033[0m"
	@make -C $(LIBDIR) fclean

re: fclean all

.PHONY: all clean fclean re
