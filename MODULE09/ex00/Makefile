NAME = btc 
CC = c++ -Wall -Werror -Wextra -std=c++98

SRC_FILES = main.cpp utils.cpp 
HEADER_FILE = utils.hpp
TEST_FILES = test_ex00.cpp BitcoinExchange.cpp

all: $(NAME)

$(NAME):
	$(CC) SRC_FILES -o $(NAME) -I $(HEADER_FILE)

clean:
	rm -rf $(NAME) test

test: clean
	$(CC) $(TEST_FILES) -o test -I ./ 