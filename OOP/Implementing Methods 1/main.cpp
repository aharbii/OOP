#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Account
{
private:
    // attributes
    string name{"Account"};
    double balance{0.0};
public:
    // methods
    void set_balance(double bal) {balance = bal;};
    double get_balance() {return balance;};
    
    void set_name(string n);
    string get_name();

    bool deposit(double bal);
    bool withdraw(double bal);
};

void Account::set_name(string n)
{
    name = n;
}

string Account::get_name()
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