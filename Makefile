# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okraus <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/14 13:43:18 by okraus            #+#    #+#              #
#    Updated: 2023/03/02 17:48:11 by okraus           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
INCS		=	libft.h
LIBC		=	ar rcs
CC 			=	cc
CFLAGS		=	-Wall -Wextra -Werror -O3
OBJ_DIR		=	objects/

# SOURCES

SRC			=	$(addprefix $(SRC_LIB_DIR), $(addsuffix .c, $(SRC_LIB))) \
	$(addprefix $(SRC_GNL_DIR), $(addsuffix .c, $(SRC_GNL))) \
	$(addprefix $(SRC_PF_DIR), $(addsuffix .c, $(SRC_PF)))

# Source directories

SRC_LIB_DIR	=	src_libft/
SRC_GNL_DIR	=	src_ft_get_next_line/
SRC_PF_DIR	=	src_ft_printf/

# Original Libft functions

SRC_LIB		=	ft_atoi \
				ft_bzero \
				ft_calloc \
				ft_isalnum \
				ft_isalpha \
				ft_isascii \
				ft_isdigit \
				ft_isprint \
				ft_itoa \
				ft_lstadd_back \
				ft_lstadd_front \
				ft_lstclear \
				ft_lstdelone \
				ft_lstiter \
				ft_lstlast \
				ft_lstmap \
				ft_lstnew \
				ft_lstsize \
				ft_memchr \
				ft_memcmp \
				ft_memcpy \
				ft_memmove \
				ft_memset \
				ft_putchar_fd \
				ft_putendl_fd \
				ft_putnbr_fd \
				ft_putstr_fd \
				ft_split \
				ft_strchr \
				ft_strdup \
				ft_striteri \
				ft_strjoin \
				ft_strlcat \
				ft_strlcpy \
				ft_strlen \
				ft_strmapi \
				ft_strncmp \
				ft_strnstr \
				ft_strrchr \
				ft_strtrim \
				ft_substr \
				ft_tolower \
				ft_toupper
#
# Extra utility functions

# Get next line functions

SRC_GNL		=	get_next_line \
				get_next_line_utils

# ft_printf functions

SRC_PF		= 	ft_padding \
				ft_printf_utils \
				ft_printf \
				ft_printformat \
				ft_string_basebig \
				ft_string_binocthex \
				ft_string_colour \
				ft_string_hexabig \
				ft_string_hexasmall \
				ft_string_integer \
				ft_string_pointer \
				ft_string_string \
				ft_string_unsigned

# Formating

NRM_COLOR = \033[0;39m

GREEN = \033[1;32m
YELLOW = \033[1;93m
RED = \033[1;31m
RETURN = \033[2F\r\033[2K

# Objects

OBJ			=	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_LIB))) \
				$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_GNL))) \
				$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_PF)))

# RULES

all: announce $(NAME)

announce: 
				@echo "$(RED)Not compiling because library already exists\n$(NRM_COLOR)"

$(OBJ_DIR)%.o:	$(SRC_LIB_DIR)%.c
				@mkdir -p $(OBJ_DIR)
				@echo "$(RETURN)$(YELLOW)Compiling Libft: $< \n$(NRM_COLOR)"
				@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)%.o:	$(SRC_GNL_DIR)%.c
				@mkdir -p $(OBJ_DIR)
				@echo "$(RETURN)$(YELLOW)Compiling get next line: $< \n$(NRM_COLOR)"
				@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)%.o:	$(SRC_PF_DIR)%.c
				@mkdir -p $(OBJ_DIR)
				@echo "$(RETURN)$(YELLOW)Compiling ft printf: $< \n$(NRM_COLOR)"
				@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@echo "$(RETURN)$(GREEN)Compilation complete!$(NRM_COLOR)"
	@$(LIBC) $(NAME) $(OBJ)
	@echo "$(GREEN)Amazing libft.a compiled!$(NRM_COLOR)"

clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(RED)Objects removed!$(NRM_COLOR)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)Library deleted!$(NRM_COLOR)"

re: fclean all

.PHONY: all clean fclean re
