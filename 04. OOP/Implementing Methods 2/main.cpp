#include <iostream>
#include "account.h"

using namespace std;

int main()
{
    Account frank_account;
    frank_account.set_name("Frank's Account");
    frank_account.set_balance(1000);

    cout << frank_account.get_balance() << endl;
    if (frank_account.deposit(200))
    {
        cout << "Deposit OK" << endl;
    }
    else
    {
        cout << "Deposit Not allowed" << endl;
    }
    cout << frank_account.get_balance() << endl;

    if (frank_account.withdraw(500))
    {
        cout << "Withdraw OK" << endl;
    }
    else
    {
        cout << "Not sufficient funds" << endl;
    }
    cout << frank_account.get_balance() << endl;

    if (frank_account.withdraw(1500))
    {
        cout << "Withdraw OK" << endl;
    }
    else
    {
        cout << "Not sufficient funds" << endl;
    }
    cout << frank_account.get_balance() << endl;

    return 0;
}