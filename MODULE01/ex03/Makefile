NAME = unnecessaryViolence

CC = c++ 
CFLAGS = -Wall -Werror -Wextra
SRC =	Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp \
		main.cpp 

REMOVE = rm -f

all: $(NAME) 

$(NAME): $(SRC)
	$(CC) -g $(CFLAGS) $(SRC) -o $(NAME) -I ./

clean:
	$(REMOVE) $(NAME)

re: clean all