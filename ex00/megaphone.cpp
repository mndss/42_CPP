#include <iostream>

int main(int argc, char* argv[]) {
	char letter;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	for (int i = 1; argv[i]; i++) {
		for (int j = 0; argv[i][j]; j++) {
			letter = toupper(argv[i][j]);
			std::cout << letter;
		}
	}
	std::cout << std::endl;
    return 0;
}