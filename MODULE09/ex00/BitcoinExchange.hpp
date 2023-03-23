#ifndef BITCOIN_HPP
# define BITCOIN_HPP

# include <iostream>
# include <cctype>
# include <iostream>
# include <fstream>
# include <ios>
# include <vector>
# include <stdio.h>
# include <stdlib.h>

bool is_valid_input_file(std::string filename);
bool valid_year(std::string year);
bool valid_month(std::string month);
bool valid_day(std::string day);
bool valid_date(std::vector<std::string> date);
std::vector<std::string> tokenize_date(std::string date);

#endif
