NAME = replace
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC =	main.cpp \

RM = rm -f 

all: $(NAME)

$(NAME): $(SRC)
	$(CC) -g $(CFLAGS) $(SRC) -o $(NAME) -I ./

clean: 
	$(RM) $(NAME)

re: clean all 