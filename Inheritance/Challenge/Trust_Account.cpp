#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    : Savings_Account{name, balance, int_rate}, num_withdrawals{0.0}
{
}

// Deposit:
//      Amount supplied to deposit will be incremented by (amount * int_rate/100)
//      and then the updated amount will be deposited
//
bool Trust_Account::deposit(double amount)
{
    amount += (amount >= 5000) ? 50 : 0;
    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount)
{
    if ((this->num_withdrawals < max_withdrawals) && (amount < (this->balance * max_withdraw_percent)))
    {
        Savings_Account::withdraw(amount);
        this->num_withdrawals += 1;
        return true;
    }
    return false;
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account)
{
    os << "[Trust Account: " << account.name << ": " << account.balance << ", " << account.int_rate
       << "%, withdrawals: " << account.num_withdrawals << "]";
    return os;
    return os;
}
