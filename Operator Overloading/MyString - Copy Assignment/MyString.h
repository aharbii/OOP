#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <iostream>
#include <cstring>
#include <string>

class MyString
{
private:
    char *str;

public:
    MyString(const char *s);
    MyString(void);
    MyString(const MyString &source);
    MyString(MyString &&source);
    MyString &operator=(const MyString &source);
    void display(void) const;
    int get_len(void) const;
    const char *get_str(void) const;
    ~MyString();
};

#endif