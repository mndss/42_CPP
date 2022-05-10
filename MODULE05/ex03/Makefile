NAME = execute
CC = c++ 
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC =	Bureaucrat.cpp \
		AForm.cpp \
		ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp \
		PresidentialPardonForm.cpp \
		Intern.cpp \
		main.cpp

REMOVE = rm -rf 

all: $(NAME) 

$(NAME): $(SRC)
	$(CC) $(CFLAGS) -g $(SRC) -o $(NAME) -I ./

clean: 
	$(REMOVE) $(NAME) *_shrubbery

re: clean all