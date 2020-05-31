.DEFAULT_GOAL := all
# Include file
# **************************************************************************** #
# 									CPP									   	   #
# **************************************************************************** #
NAME = whatever
# Libft ASM project files
FILE_SRC = whatever.cpp
FILE_OBJ = $(FILE_SRC:.cpp=.o)
# **************************************************************************** #
# 								Building Rules								   #
# **************************************************************************** #
# Rule to build both executables
all: $(NAME)
# Rule to build Nm
$(NAME): $(FILE_SRC)
	clang++ -Wall -Wextra -Werror whatever.cpp -o whatever
	@echo "\033[0;32m[UPDATE] \033[0m \033[1;30m CREATED:\033[0m \033 \033[0m \033[0;36m whatever.cpp\033[0m" $(shell ls -la | grep libasm | rev | cut -d " " -f 4 | rev) $(shell ls -la | grep libasm | rev | cut -d " " -f 3 | rev) $(shell ls -la | grep libasm | rev | cut -d " " -f 2 | rev)

# **************************************************************************** #
# 								Cleaning Rules								   #
# **************************************************************************** #
clean:
	@rm -rf $(FILE_OBJ)
	@echo "\033[0;32m[UPDATE] \033[0m \033[1;30m REMOVE:\033[0m \033 \033[0m \033[0;31m *.o\033[0m \033"
fclean: clean
	@rm -rf $(NAME)
	@echo "\033[0;32m[UPDATE] \033[0m \033[1;30m REMOVE:\033[0m \033 \033[0m \033[0;31m whatever\033[0m \033"
re: fclean all

.PHONY: all clean fclean