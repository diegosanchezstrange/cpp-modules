#include <iostream>
#include <algorithm>
#include <vector>
#include "Account.hpp"

int main(void)
{
    int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };
    std::vector<Account> accounts(amounts, sizeof(amounts) / sizeof(int) + amounts);

    //Account::displayAccountsInfos();
    //std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );
}