NAME = harl
CC = c++ 
FLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	main.cpp \
		Harl.cpp 

REMOVE = rm -rf 

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) -g $(SRC) -o $(NAME) -I ./

clean: 
	rm -rf $(NAME)

re: clean all