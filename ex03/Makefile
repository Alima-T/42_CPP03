# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/31 20:10:20 by aokhapki          #+#    #+#              #
#    Updated: 2025/08/11 23:11:11 by aokhapki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Directories
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = include
NAME = diamondtrap

# Files listed manually
SRCS = $(SRC_DIR)/main.cpp $(SRC_DIR)/ClapTrap.cpp $(SRC_DIR)/FragTrap.cpp $(SRC_DIR)/ScavTrap.cpp $(SRC_DIR)/DiamondTrap.cpp
OBJS = $(OBJ_DIR)/main.o $(OBJ_DIR)/ClapTrap.o $(OBJ_DIR)/FragTrap.o $(OBJ_DIR)/ScavTrap.o $(OBJ_DIR)/DiamondTrap.o

# Compiler
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++17 -I$(INC_DIR)

# Default target
all: $(NAME)

# Link executable
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile .cpp to .o
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean object files
clean:
	rm -rf $(OBJ_DIR)

# Clean everything
fclean: clean
	rm -f $(NAME)

# Rebuild
re: fclean all

.PHONY: all clean fclean re

