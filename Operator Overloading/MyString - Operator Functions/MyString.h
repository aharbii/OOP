#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <iostream>
#include <cstring>
#include <string>

class MyString
{

    friend bool operator==(const MyString &lhs, const MyString &rhs);
    friend MyString operator-(const MyString &obj);
    friend MyString operator+(const MyString &lhs, const MyString &rhs);
private:
    char *str;
public:
    MyString(void);
    MyString(const char *s);
    MyString(const MyString &source);
    MyString(MyString &&source);
    MyString &operator=(const MyString &source);
    MyString &operator=(MyString &&source);
    void display(void) const;
    int get_len(void) const;
    const char * get_str(void) const;
    ~MyString();
};



#endif