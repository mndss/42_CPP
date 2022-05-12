NAME = unnecessaryViolence

CC = c++ 
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC =	Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp \
		main.cpp 

REMOVE = rm -f

all: $(NAME) 

$(NAME): $(SRC)
	$(CC) -g $(CFLAGS) $(SRC) -o $(NAME) -I ./

valgrind: $(NAME)
	 valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

clean:
	$(REMOVE) $(NAME)

re: clean all