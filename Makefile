# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 23:46:05 by jaleman           #+#    #+#              #
#    Updated: 2016/11/03 23:46:08 by jaleman          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    := libft.a

INC_DIR := includes
SRC_DIR := srcs
LIB_DIR := libs
OBJ_DIR := objs

INCLS   := $(wildcard $(INC_DIR)/*.h)
SRCS    := $(wildcard $(SRC_DIR)/*.c)
LIBS    := $(addprefix $(LIB_DIR)/, $(NAME))
OBJS    := $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

CC      := gcc
CFLAGS  += -Wall -Wextra -Werror
LFLAGS  += -I.
AR      := ar rc
RLIB    := ranlib

all: obj $(LIBS)

obj:
	@mkdir -p $(OBJ_DIR)

$(LIBS): $(OBJS)
	@mkdir -p $(LIB_DIR)
	@$(AR) $(LIBS) $(OBJS)
	@$(RLIB) $(LIBS)
	@echo "[INFO] $(NAME) created!"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $(LFLAGS) -I./$(INCLS) -c $< -o $@

clean:
		@rm -rf $(OBJS) $(OBJ_DIR)
		@echo "[INFO] Objects removed!"

fclean: clean
		@rm -rf $(LIBS) $(LIB_DIR)
		@echo "[INFO] Library [$(NAME)] removed!"

re:		fclean all

.PHONY: all clean fclean re
