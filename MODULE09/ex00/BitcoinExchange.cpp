#include <BitcoinExchange.hpp>

bool is_valid_input_file(std::string filename) {
    std::ifstream input_file;
    if (filename.find(".txt", filename.length() - 4, 3) != std::string::npos)
    try {
        input_file.open(filename.c_str(), std::ifstream::in);
        if (input_file.is_open())
            return true;
    } catch (std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }
    return false;
}

bool valid_year(std::string year) {
    if (atoi(year.c_str()) > 1900 && atoi(year.c_str()) <= 2023) {
        return true;
    }
    return false;
}

bool valid_month(std::string month) {
    if (atoi(month.c_str()) > 0 && atoi(month.c_str()) <= 12) {
        return true;
    }
    return false;
}

bool valid_day(std::string day) {
    if (atoi(day.c_str()) > 0 && atoi(day.c_str()) <= 31) {
        return true;
    }
    return false;
}

// 2020-09-01
// date = 2020-09-01
// year = date.substr(0, 3)
// year = date.substr(0, 3)
// monoth = date.substr(5, 6)
// day = date.substr(8, 9)

std::vector<std::string> tokenize_date(std::string date) {
	std::vector<std::string> splited;
    unsigned int start_substring = 0; 
    unsigned int count = 0;
    while (count < date.length()) {
        if (date[count] == '-') {
            splited.push_back(date.substr(start_substring, count - start_substring));
            start_substring = count + 1;
        }
        count++;
    }
    splited.push_back(date.substr(start_substring, count - start_substring));
    return splited;
}

bool valid_date(std::vector<std::string> date) {
    if (valid_year(date[0]) &&
        valid_month(date[1]) &&
        valid_day(date[2]))
        return true;
    return false;
}
