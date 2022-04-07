#include <iostream>
#include <vector>

using namespace std;

void print(int n);
void print(double n);
void print(string s);
void print(string s, string t);
void print(vector<string> v);

int main()
{
    print(100);
    print('A');

    print(123.5);
    print(123.3F);

    print("C-style string");
    string s{"C++ string"};
    print(s);

    print("C-style string", s);
    vector<string> three_stooges{"Larry", "Moe", "Curly"};
    print(three_stooges);

    return 0;
}

void print(int n)
{
    cout << "Printing int: " << n << endl;
}

void print(double n)
{
    cout << "Printing double: " << n << endl;
}

void print(string s)
{
    cout << "Printing string: " << s << endl;
}

void print(string s, string t)
{
    cout << "Printing 2 strings: " << s << " and " << t << endl;
}

void print(vector<string> v)
{
    cout << "Printing Vector of Strings: ";
    for (auto element : v)
    {
        cout << element << " ";
    }
    cout << endl;
}