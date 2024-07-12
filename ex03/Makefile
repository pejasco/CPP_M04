NAME := interface
FILES := main.cpp \
	ClapTrap.cpp
FLAGS := -Wall -Wextra -Werror -std=c++98
OFILES := $(patsubst %.cpp, build/%.o, $(FILES))

all: $(NAME)

debug: FLAGS = -std=c++98 -g
debug: re

$(NAME): $(OFILES)
	@c++ $(OFILES) -o $@ $(FLAGS)
	@echo "\033[0;94m\nThe executable has been created 🥳:\n=>\033[0;32m$@\033[0;94m\033[0m"

build/%.o: %.cpp
	@mkdir -p $(@D)
	@c++ $< -c -o $@ $(FLAGS)
	@echo "\033[0;94mCompiling \"$^\"...\033[0m"

clean:
	@echo "\033[0;31mRemoving build directory...\033[0m"
	@rm -rf build

fclean: clean
	@echo "\033[0;31mRemoving executable...\033[0m"
	@rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
