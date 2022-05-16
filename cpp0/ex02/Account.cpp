#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

Account::Account(int initial_deposit)
{
    this->_accountIndex = Account::getNbAccounts();
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
    Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
}

Account::~Account()
{
	Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed";
    if (this->_accountIndex != Account::getNbAccounts() - 1)
        std::cout << std::endl;
}

int  Account::_nbAccounts = 0;
int  Account::_totalAmount = 0;
int  Account::_totalNbWithdrawals = 0;
int  Account::_totalNbDeposits = 0;

int  Account::getNbAccounts() {return (Account::_nbAccounts);}
int  Account::getNbDeposits() {return (Account::_totalNbDeposits);}
int  Account::getNbWithdrawals() {return (Account::_totalNbWithdrawals);}
int  Account::getTotalAmount() {return (Account::_totalAmount);}

void Account::_displayTimestamp()
{
	std::time_t t = std::time(NULL);

	std::tm now = *localtime(&t);

	std::cout
			<< "["
			<< (now.tm_year + 1900)
			<< std::setfill('0')
			<< std::setw(2) << now.tm_mon + 1
			<< std::setw(2) << now.tm_mday << "_"
			<< std::setw(2) << now.tm_hour
			<< std::setw(2) << now.tm_min
			<< std::setw(2) << now.tm_sec
			<< "] ";
}

void Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit << ";";
    this->_amount += deposit;
    this->_nbDeposits++;
    t::_totalAmount += deposit;
    t::_totalNbDeposits++;
    std::cout << "amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    if (this->_amount < withdrawal)
    {
		Account::_displayTimestamp();
        std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
        return (false);
    }
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:" << withdrawal << ";";
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;
    t::_totalAmount -= withdrawal;
    t::_totalNbWithdrawals++;
    std::cout << "amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return (true);
}

int Account::checkAmount() const
{
   return (this->_amount);
}

void Account::displayStatus() const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}
