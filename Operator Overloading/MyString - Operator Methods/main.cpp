#include <iostream>
#include <vector>
#include "MyString.h"

using namespace std;

int main()
{
    cout << boolalpha << endl;

    MyString larry{"Larry"};
    MyString moe{"Moe"};

    MyString stooge = larry;
    larry.display(); // Larry
    moe.display();   // Moe

    cout << (larry == moe) << endl;    // false
    cout << (larry == stooge) << endl; // true

    larry.display(); // Larry
    MyString larry2 = -larry;
    larry2.display(); // larry

    MyString stooges = larry + "Moe"; // ok with member function
    // MyString stooges = "Larry" + moe;                                 // Compiler error

    MyString two_stooges = moe + " " + "Larry";
    two_stooges.display();
    // Moe Larry
    MyString three_stooges = moe + " " + larry + " " + "Curly";
    three_stooges.display(); //  Moe Larry Curly

    return 0;
}
