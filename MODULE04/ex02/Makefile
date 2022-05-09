NAME = brain
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC =	AAnimal.cpp \
		Cat.cpp \
		Dog.cpp \
		Brain.cpp \
		main.cpp 

REMOVE = rm -rf 

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME) -I ./

clean:
	$(REMOVE) $(NAME)

re: clean all