#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

std::string findAndReplace(std::string content, std::string s1, std::string s2) {
	std::string	strOut;
	std::size_t	found;

	while (content.find(s1) != std::string::npos) {
		found = content.find(s1);
		strOut.append(content.substr(0, found));
		strOut.append(s2);
		content = content.substr(found + s1.size(), content.size());
	}
	strOut.append(content);
	return strOut;
}

std::string	openAndReadFileIn(std::string fileIn) {
	std::ifstream		in;
	std::stringstream	buffer;

	in.open(fileIn.c_str(), std::ifstream::in);
	buffer << in.rdbuf();
	if (!buffer)
		std::cout << "Somthing was wrong to open file" << std::endl;
	in.close();
	return buffer.str();
}

int	main(int argc, char *argv[]) {

	if (argc != 4) {
		std::cout << "Number of arguemnts invalid" << std::endl;
		return 1;
	}

	if (!argv[2] || !argv[3]) {
		std::cout << "strings can't be void" << std::endl;
		return 2;
	}
	std::ofstream		fileOut;
	std::string			filename;
	std::string			fileInContent;
	std::string			strOut;

	filename = argv[1];
	filename.append(".replace");
	fileInContent = openAndReadFileIn(argv[1]);
	if (fileInContent.empty())
		return 3;
	fileOut.open(filename.c_str(), std::ofstream::out);
	strOut = findAndReplace(fileInContent, argv[2], argv[3]);
	fileOut << strOut;
	fileOut.close();
	return 0;
}
