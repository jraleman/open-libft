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

# Name of the library.
NAME    := libft.a

# Name of the directories.
INC_DIR := includes
SRC_DIR := srcs
OBJ_DIR := objs

# Path of the directories.
INCLS   := $(INC_DIR)
SRCS    := $(wildcard $(SRC_DIR)/*.c)
OBJS    := $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# Define all the compiling flags.
CC      := gcc
CFLAGS  += -Wall -Werror -Wextra -g
#-fsanitize=address -fno-omit-frame-pointer
LFLAGS  += -I.
AR      := ar rcs
RLIB    := ranlib

# Compile and create everything.
all:	obj
		@$(MAKE) -j $(NAME)

# Creates the object files' directory.
obj:
		@mkdir -p $(OBJ_DIR)

# This won't run if the object files don't exist or are not modified.
$(NAME): $(OBJS)
		@$(AR) $(NAME) $(OBJS)
		@$(RLIB) $(NAME)
		@echo "[INFO] $(NAME) created!"

# This won't run if the source files don't exist or are not modified.
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
		$(CC) $(CFLAGS) -c $< -o $@ $(LFLAGS)/$(INCLS)

# Rule to remove all the object files and directory.
clean:
		@rm -rf $(OBJS) $(OBJ_DIR)
		@echo "[INFO] Objects removed!"

# Rule to remove everything that has been created by the makefile.
fclean: clean
		@rm -rf $(NAME) $(LIB_DIR)
		@echo "[INFO] Library [$(NAME)] removed!"

# Rule to re-make everything.
re:		fclean all

# Unit test the library.
test:	all
		@echo "Test"

# Installs the library.
install:test
		@echo "You must be root to install"

# Makes sure that gnu make will still run even if files called
# clean / fclean / all and re already exist in the directory
.PHONY:	all clean fclean re test install
