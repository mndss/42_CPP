#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <climits>
#include <limits>

void	convertChar(std::string arg) {

	if (arg.length() == 1 && isalpha(arg[0])) {
		std::cout << "character: " << arg[0] << std::endl;
		return ;
	} else if (arg.length() > 1 && isalpha(arg[1])) {
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	char c = static_cast<char>(atoi(arg.c_str()));
	if (isprint(c))
		std::cout << "character: " << c << std::endl;
	else
		std::cout << "char: not displayable" << std::endl;
}

void	convertInt(std::string arg) {

	if (arg.length() == 1 && isalpha(arg[0])) {
		std::cout << "int: " << static_cast<int>(arg[0]) << std::endl;
		return ;
	}
	long int num = atol(arg.c_str());
	if (num < INT_MAX && num > INT_MIN && num != 0) {
		std::cout << "int: " << num << std::endl;
	} else {
		std::cout << "int: impossible" << std::endl;
	}
}

void	convertFloat(std::string arg) {
	if (arg.length() == 1 && isalpha(arg[0])) {
		std::cout << "float: " << static_cast<float>(arg[0]) << "0.f" << std::endl;
		return ;
	}
	double num = atof(arg.c_str());
	if (num == 0 && arg.length() != 1 && arg[0] != '0') {
		std::cout << "float: nanf" << std::endl; 
		return ;
	}
	if (num == std::numeric_limits<double>::infinity() && arg[0] == '-')
		std::cout << "float: -inff" << std::endl;
	else if (num == std::numeric_limits<double>::infinity())
		std::cout << "float: +inff" << std::endl;
	else if ((long double)num == (int)num)
		std::cout << "float: " << num << ".0f" << std::endl;
	else
		std::cout << "float: " << num << "f" << std::endl;
}

void	convertDouble(std::string arg) {
	if (arg.length() == 1 && isalpha(arg[0])) {
		std::cout << "double: " << static_cast<double>(arg[0]) << ".0" << std::endl;
		return ;
	}
	double num = atof(arg.c_str());
	if (num == 0 && arg.length() != 1 && arg[0] != '0') {
		std::cout << "dobule: nan" << std::endl; 
		return ;
	}
	if (num == std::numeric_limits<double>::infinity() && arg[0] == '-')
		std::cout << "double: -inf" << std::endl;
	else if (num == std::numeric_limits<double>::infinity())
		std::cout << "double: +inf" << std::endl;
	else if ((long double)num == (int)num)
		std::cout << "double: " << num << ".0" << std::endl;
	else
		std::cout << "double: " << num << std::endl;
}

int main(int argc, char *argv[]) {
	
	if (argc != 2) {
		std::cout << "Invalid number of arguments" << std::endl;
		return 1;
	}
	convertChar(argv[1]);
	convertInt(argv[1]);
	convertFloat(argv[1]);
	convertDouble(argv[1]);
	return 0;
}
