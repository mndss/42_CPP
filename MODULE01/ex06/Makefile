NAME = harlFilter
CC = c++ 
FALGS = -Wall -Wextra -Werror -std=c++98
SRC =	main.cpp \
		Harl.cpp 

REMOVE = rm -rf  

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) -g $(SRC) -o $(NAME) -I ./

clean: 
	$(REMOVE) $(NAME)

re: clean all