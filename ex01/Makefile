NAME =	phonebook
CC = c++
FALGS = -Wall -Wextra -Werror -std=c++98
SRC =	Contact.cpp \
		main.cpp \
		PhoneBook.cpp \

REMOVE = rm -rf

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -g $(SRC) -o $(NAME) -I ./

clean: 
	$(REMOVE) $(NAME)

re: clean all