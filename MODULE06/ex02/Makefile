NAME = identify
CC = c++ 
CFLAGS = -Wall -Werror -Wextra
SRC = main.cpp
REMOVE = rm -rf 


all: $(NAME) 

$(NAME): $(SRC)
	$(CC) $(CFLAGS) -g $(SRC) -o $(NAME) -I ./

clean: 
	$(REMOVE) $(NAME)

re: clean all