#include "MyString.h"

MyString::MyString(void)
    : str{nullptr}
{
    this->str = new char[1];
    this->str[0] = '\0';
}

MyString::MyString(const char *s)
    : str{nullptr}
{
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

MyString &MyString::operator=(const MyString &source)
{
    std::cout << "Copy Assignment" << std::endl;

    if (this == &source)
    {
        return *this;
    }

    delete[] this->str;
    this->str = new char[std::strlen(source.str) + 1];
    std::strcpy(this->str, source.str);
    return *this;
}

MyString &MyString::operator=(MyString &&source)
{
    std::cout << "Move Assignment" << std::endl;
    if (this == &source)
    {
        return *this;
    }

    delete[] this->str;
    this->str = new char[std::strlen(source.str) + 1];
    strcpy(this->str, source.str);
    return *this;
}

MyString::~MyString()
{
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

bool operator==(const MyString &lhs, const MyString &rhs)
{
    return (std::strcmp(lhs.str, rhs.str) == 0);
}

MyString operator-(const MyString &obj)
{
    char *buffer = new char[std::strlen(obj.str) + 1];
    std::strcpy(buffer, obj.str);
    for (int i = 0; obj.str[i]; i++)
    {
        buffer[i] = std::tolower(buffer[i]);
    }
    MyString temp{buffer};
    delete [] buffer;
    return temp;
}

MyString operator+(const MyString &lhs, const MyString &rhs)
{
    char *buffer = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buffer, lhs.str);
    std::strcat(buffer, rhs.str);

    MyString temp{buffer};
    delete [] buffer;
    return temp;
}