#include "account.h"

void Account::set_name(std::string n)
{
    name = n;
}

std::string Account::get_name()
{
    return name;
}

bool Account::deposit(double bal)
{
    balance += bal;
    return true;
}

bool Account::withdraw(double bal)
{
    if (balance - bal >= 0)
    {
        balance -= bal;
        return true;
    }
    else
    {
        return false;
    }
}