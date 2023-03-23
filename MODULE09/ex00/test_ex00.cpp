#include "minunit.h"
#include <BitcoinExchange.hpp>

using namespace std;

MU_TEST(test_valid_file_as_argument) {
    const char* filename = "./input.txt";
    bool valid_file;
    bool expect_result = true;

    valid_file = is_valid_input_file(filename);

    mu_assert_int_eq(expect_result, valid_file);
}

MU_TEST(test_give_invalid_file_as_argument) {
    const char* filename = "invalid_filename.txt";
    bool valid_file; 

    valid_file = is_valid_input_file(filename);
    mu_assert(!valid_file, "file extension invalid or not found");
}

MU_TEST(test_valid_date_returns_true) {
    std::vector<std::string> date;
    date.push_back("2020");
    date.push_back("09");
    date.push_back("01");
    
    bool result = valid_date(date);

    mu_assert_int_eq(true, result);
}

MU_TEST(test_invalid_year_returns_false) {
    std::vector<std::string> date;
    date.push_back("2500");
    date.push_back("09");
    date.push_back("01");
    
    bool result = valid_date(date);

    mu_assert_int_eq(false, result);
}

MU_TEST(test_invalid_month_returns_false) {
    std::vector<std::string> date;
    date.push_back("2020");
    date.push_back("13");
    date.push_back("01");
    
    bool result = valid_date(date);

    mu_assert_int_eq(false, result);
}


MU_TEST(test_invalid_negative_month_returns_false) {
    std::vector<std::string> date;
    date.push_back("2020");
    date.push_back("-13");
    date.push_back("01");
    
    bool result = valid_date(date);

    mu_assert_int_eq(false, result);
}

MU_TEST(test_invalid_day_returns_false) {
    std::vector<std::string> date;
    date.push_back("2020");
    date.push_back("10");
    date.push_back("50");
    
    bool result = valid_date(date);

    mu_assert_int_eq(false, result);
}

MU_TEST(test_invalid_day_in_febuary_returns_false) {
    std::vector<std::string> date;
    date.push_back("2020");
    date.push_back("02");
    date.push_back("30");
    
    bool result = valid_date(date);

    mu_assert_int_eq(false, result);
}

//TODO This test need change, i made it to check if tokenization was working
// The goal of test is check if the date is valid
MU_TEST(test_valid_date_format) {
    std::string date = "2020-09-01";
    std::string expected_result = "20200901";
    const char **cleaned_date = tokenize_date(date);
    std::string result;
    for (unsigned int i = 0; i < cleaned_date.size(); i++)
        result.append(cleaned_date[i]);
    mu_assert_string_eq(expected_result.c_str(), result.c_str());
}


MU_TEST_SUITE(test_arguments) {
    MU_RUN_TEST(test_valid_file_as_argument);
    MU_RUN_TEST(test_give_invalid_file_as_argument);
    MU_RUN_TEST(test_valid_date_format);
    MU_RUN_TEST(test_valid_date_returns_true);
    MU_RUN_TEST(test_invalid_year_returns_false);
    MU_RUN_TEST(test_invalid_month_returns_false);
    MU_RUN_TEST(test_invalid_negative_month_returns_false);
    MU_RUN_TEST(test_invalid_day_returns_false);
    MU_RUN_TEST(test_invalid_day_in_febuary_returns_false);
}

int main(int argc, char *argv[]) {
    (void)argc;
    (void)argv;
	MU_RUN_SUITE(test_arguments);
	MU_REPORT();
	return MU_EXIT_CODE;
}

