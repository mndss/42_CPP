#include <Account.hpp>

Account::Account(int initial_deposit) {
	this->_accountIndex = Account::getNbAccounts();
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;
	Account::_nbAccounts++;
	std::cout << "["; 
	Account::_displayTimestamp();
	std::cout << "] ";
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account(void) {
	std::cout << "["; 
	Account::_displayTimestamp();
	std::cout << "] ";
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
	return ;
}

int		Account::getNbAccounts(void) {
	return Account::_nbAccounts;
}

int		Account::getTotalAmount(void) {
	return Account::_totalAmount;
}

int		Account::getNbDeposits(void) {
	return Account::_totalNbDeposits;
}

int		Account::getNbWithdrawals(void) {
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void) {
	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "] ";
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals();
	std::cout << std::endl;
	return ;
}

void	Account::makeDeposit(int deposit) {
	if (deposit < 0)
		return ;
	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "] ";
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << (this->_amount + deposit ) << ";";
	std::cout << "nb_deposits:" << (this->_nbDeposits + 1) << std::endl;
	this->_amount += deposit; 
	this->_nbDeposits++;
	this->_totalAmount += deposit; 
	this->_totalNbDeposits++; 
}

bool	Account::makeWithdrawal(int withdrawal) {
	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "] ";
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "withdrawal:";
	if (this->_amount < withdrawal) {
		std::cout << "refused" << std::endl;
		return false;
	}
	std::cout << withdrawal << ";";
	std::cout << "amount:" << (this->_amount - withdrawal) << ";";
	std::cout << "nb_withdrawals:" << (this->_nbWithdrawals + 1) << std::endl;
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	this->_totalAmount -= withdrawal;
	this->_totalNbWithdrawals++;
	return true;
}

int		Account::checkAmount(void) const {
	return getTotalAmount(); 
}

void	Account::displayStatus(void) const {
	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "] ";
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
	return ;
}

void	Account::_displayTimestamp(void) {
	time_t		timer;
	struct tm	*date;

	time(&timer);
	date = localtime(&timer);
	std::cout.fill('0');
	std::cout << date->tm_year + 1900 << 
	std::setw(2) << date->tm_mon + 1 <<
	std::setw(2) << date->tm_mday <<
	'_' << 
	std::setw(2) << date->tm_hour <<
	std::setw(2) << date->tm_min <<
	std::setw(2) << date->tm_sec;
	return ;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;