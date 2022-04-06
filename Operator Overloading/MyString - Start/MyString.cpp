#include "MyString.h"

MyString::MyString(void)
    : str{nullptr}
{
    std::cout << "No args constructor" << std::endl;
    this->str = new char[1];
    this->str[0] = '\0';
}

MyString::MyString(const char *s)
    : str{nullptr}
{
    std::cout << "String Constructor" << std::endl;
    if (s == nullptr)
    {
        this->str = new char[1];
        str[0] = '\0';
    }
    else
    {
        this->str = new char[std::strlen(s) + 1];
        std::strcpy(this->str, s);
    }
}

MyString::MyString(const MyString &source)
    : str{nullptr}
{
    std::cout << "Copy Constructor" << std::endl;
    this->str = new char[std::strlen(source.str) + 1];
    std::strcpy(this->str, source.str);
}

MyString::MyString(MyString &&source)
    : str{source.str}
{
    std::cout << "Move Constructor" << std::endl;
    source.str = nullptr;
}

MyString::~MyString()
{
    std::cout << "Destructor" << std::endl;
    delete[] this->str;
}

void MyString::display(void) const
{
    std::cout << this->str << " : " << get_len() << std::endl;
}

int MyString::get_len(void) const
{
    return std::strlen(this->str);
}

const char *MyString::get_str(void) const
{
    return this->str;
}
