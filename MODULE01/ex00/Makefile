NAME = zombies
CC = c++ 
CFLAGS = -Wall -Werror -Wextra 
 
SRC =	main.cpp \
		newZombie.cpp \
		randomChump.cpp \
		Zombie.cpp 
 
RM =	rm -f

all: $(NAME)

$(NAME): $(SRC)
	$(CC) -g $(CFLAGs) $(SRC) -o $(NAME) -I ./

clean:
	$(RM) $(NAME)

re: clean all

run: re
	./zombies

.PHONY: all zombies run clean re 