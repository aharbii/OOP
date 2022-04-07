#include <iostream>
#include <vector>
#include "MyString.h"

using namespace std;

int main()
{
    MyString a{"Hello"};
    MyString b = a;
    b.display();
    b = "This is a test";
    b.display();

    MyString empty;          // no-args constructor
    MyString larry("Larry"); // overloaded constructor
    MyString stooge{larry};  // copy constructor
    MyString stooges;        // no-args constructor

    empty = stooge; // copy assignment operator

    empty.display();  // Larry : 5
    larry.display();  // Larry : 5
    stooge.display(); // Larry : 5
    empty.display();  // Larry : 5

    stooges = "Larry, Moe, and Curly";
    stooges.display(); // Larry, Moe, and Curly : 21

    vector<MyString> stooges_vec;
    stooges_vec.push_back("Larry");
    stooges_vec.push_back("Moe");
    stooges_vec.push_back("Curly");

    cout << "=== Loop 1 ==================" << endl;
    for (const MyString &s : stooges_vec)
        s.display(); // Larry
                     // Moe
                     // Curly
    cout << "=== Loop 2 ==================" << endl;
    for (MyString &s : stooges_vec)
        s = "Changed"; // copy assignment

    cout << "=== Loop 3 ================" << endl;
    for (const MyString &s : stooges_vec)
        s.display(); // Changed
                     // Changed
                     // Changed
}