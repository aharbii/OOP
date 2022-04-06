#include <iostream>
#include <vector>
#include "MyString.h"

using namespace std;

int main()
{

    MyString larry{"Larry"};
    larry.display(); // Larry

    larry = -larry;
    larry.display(); // larry

    cout << boolalpha << endl;
    MyString moe{"Moe"};
    MyString stooge = larry;

    cout << (larry == moe) << endl;    // false
    cout << (larry == stooge) << endl; // true

    //  MyString stooges = larry + "Moe";
    MyString stooges = "Larry" + moe; // Now OK with non-member function
    stooges.display();                // LarryMoe

    MyString two_stooges = moe + " " + "Larry";
    two_stooges.display(); // Moe Larry
    MyString three_stooges = moe + " " + larry + " " + "Curly";
    three_stooges.display(); // Moe larry Curly

    return 0;
}
