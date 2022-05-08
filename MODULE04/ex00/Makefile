NAME = polymorphism
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC =	Animal.cpp \
		Cat.cpp \
		Dog.cpp \
		WrongCat.cpp \
		WrongAnimal.cpp \
		main.cpp 

REMOVE = rm -rf 

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME) -I ./

clean:
	$(REMOVE) $(NAME)

re: clean all