NAME = app
CC = c++
FLAGS = -Wall -Werror -Wextra

SRC =	Account.cpp \
		tests.cpp \

REMOVE = rm -rf

all: $(NAME)

$(NAME):
	$(CC) -g $(FLAGS) $(SRC) -o $(NAME) -I ./

clean: 
	$(REMOVE) $(NAME)

run: re
	./app

re: clean all 