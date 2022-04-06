#include <iostream>
#include "MyString.h"

using namespace std;

int main()
{
    MyString empty;
    MyString larry{"Larry"};
    MyString stooge{larry};

    empty.display();
    larry.display();
    stooge.display();
}