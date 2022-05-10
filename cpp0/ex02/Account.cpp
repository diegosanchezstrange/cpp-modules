#include "Account.hpp"
#include <iostream>
#include <ctime>

Account::Account(int initial_deposit)
{
    this->_accountIndex = Account::getNbAccounts();
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    std::cout << "[time]" << " index:" << this->_accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
    Account::_nbAccounts++;
}

Account::~Account()
{
    std::cout << "[time] " << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed";
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
    time_t time = std::time(NULL);
    std::string s;

    std::strftime(s.c_str(), 30, )

    std::cout << "";
}

void Account::displayAccountsInfos()
{
    std::cout << "[time] " << std::endl;
}

void Account::makeDeposit(int deposit)
{
    std::cout << "[time] " << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit << ";";
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
        std::cout << "[time] " << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
        return (false);
    }
    std::cout << "[time] " << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:" << withdrawal << ";";
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;
    t::_totalAmount -= withdrawal;
    t::_totalNbDeposits++;
    std::cout << "amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return (true);
}

int Account::checkAmount() const
{
   return (this->_amount);
}

void Account::displayStatus() const
{
   std::cout << "[time] " << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}
