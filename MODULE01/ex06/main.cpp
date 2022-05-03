#include <Harl.hpp>

int main(int argc, char *argv[]) {
	Harl	harl;
	int		level;
	
	if (argc != 2)
		return 0;
	if (!argv[1]) {
		std::cout << "entrou" << std::endl;
		return (0);
	}
	level = harl.getLevel(argv[1]);
	harl.printLevelAndAbove(level);
	return 0;
}