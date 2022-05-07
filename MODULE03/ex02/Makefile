NAME =	fragtrap
FLAGS =	-Wall -Werror -Wextra -std=c++98
CC =	c++
SRC =	ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \
		main.cpp 

REMOVE = rm -rf

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) -g $(SRC) -o $(NAME) -I ./

clean:
	$(REMOVE) $(NAME)

re: clean all