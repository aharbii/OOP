#include <iostream>

using namespace std;

unsigned long long fibonacci(unsigned long long n);

int main()
{
    cout << fibonacci(7) << endl;
    return 0;
}

unsigned long long fibonacci(unsigned long long n)
{
    if ((n == 0) || (n == 1))
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}