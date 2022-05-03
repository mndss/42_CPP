NAME = hordeOfZombies
CC	= c++ 
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	main.cpp \
		Zombie.cpp \
		zombieHorde.cpp \

RM = rm -f

all: $(NAME)

$(NAME): $(SRC)
	$(CC) -g $(CFLAGS) $(SRC) -o $(NAME) -I ./

clean:
	$(RM) $(NAME)

re: clean all

run: re
	./$(NAME) 3