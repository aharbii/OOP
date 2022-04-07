#include <iostream>
#include <cstring>
#include "Mystring.h"

// No-args constructor
Mystring::Mystring()
    : str{nullptr}
{
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s)
    : str{nullptr}
{
    if (s == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
}

// Copy constructor
Mystring::Mystring(const Mystring &source)
    : str{nullptr}
{
    str = new char[strlen(source.str) + 1];
    strcpy(str, source.str);
    //       std::cout << "Copy constructor used" << std::endl;
}

// Move constructor
Mystring::Mystring(Mystring &&source)
    : str(source.str)
{
    source.str = nullptr;
    //        std::cout << "Move constructor used" << std::endl;
}

// Destructor
Mystring::~Mystring()
{
    delete[] str;
}

// Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs)
{
    //    std::cout << "Using copy assignment" << std::endl;

    if (this == &rhs)
        return *this;
    delete[] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

// Move assignment
Mystring &Mystring::operator=(Mystring &&rhs)
{
    //   std::cout << "Using move assignment" << std::endl;
    if (this == &rhs)
        return *this;
    delete[] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

// Display method
void Mystring::display() const
{
    std::cout << str << " : " << get_length() << std::endl;
}

// getters
int Mystring::get_length() const { return strlen(str); }
const char *Mystring::get_str() const { return str; }

// overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs)
{
    os << rhs.str;
    return os;
}

// overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs)
{
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete[] buff;
    return in;
}

Mystring operator-(const Mystring &obj)
{
    char *buffer = new char[std::strlen(obj.str) + 1];
    std::strcpy(buffer, obj.str);
    for (int i = 0; buffer[i]; i++)
    {
        buffer[i] = std::tolower(buffer[i]);
    }

    Mystring temp{buffer};
    delete[] buffer;
    return temp;
}

bool operator==(const Mystring &lhs, const Mystring &rhs)
{
    return !(std::strcmp(lhs.str, rhs.str));
}
bool operator!=(const Mystring &lhs, const Mystring &rhs)
{
    return std::strcmp(lhs.str, rhs.str);
}
bool operator<(const Mystring &lhs, const Mystring &rhs)
{
    int len = 0;
    if (std::strlen(lhs.str) < std::strlen(rhs.str))
    {
        len = std::strlen(lhs.str);
    }
    else
    {
        len = std::strlen(rhs.str);
    }

    for (int i = 0; i < len; i++)
    {
        if (lhs.str[i] < rhs.str[i])
        {
            return true;
        }
        else if (lhs.str[i] > rhs.str[i])
        {
            return false;
        }
    }

    if (std::strlen(lhs.str) == std::strlen(rhs.str))
    {
        return false;
    }
    return true;
}
bool operator>(const Mystring &lhs, const Mystring &rhs)
{
    int len = 0;
    if (std::strlen(lhs.str) < std::strlen(rhs.str))
    {
        len = std::strlen(lhs.str);
    }
    else
    {
        len = std::strlen(rhs.str);
    }

    for (int i = 0; i < len; i++)
    {
        if (lhs.str[i] > rhs.str[i])
        {
            return true;
        }
        else if (lhs.str[i] < rhs.str[i])
        {
            return false;
        }
    }

    if (std::strlen(lhs.str) == std::strlen(rhs.str))
    {
        return false;
    }
    return true;
}
Mystring operator+(const Mystring &lhs, const Mystring &rhs)
{
    char *buffer = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buffer, lhs.str);
    std::strcat(buffer, rhs.str);

    Mystring temp{buffer};
    delete[] buffer;
    return temp;
}
Mystring Mystring::operator+=(const Mystring &rhs)
{
    char *buffer = new char[std::strlen(this->str) + std::strlen(rhs.str) + 1];
    std::strcpy(buffer, this->str);
    std::strcat(buffer, rhs.str);

    delete[] this->str;
    this->str = buffer;
    return *this;
}
Mystring operator*(const Mystring &lhs, int repeats)
{
    char *buffer = new char[std::strlen(lhs.str) * repeats + 1];
    std::strcpy(buffer, lhs.str);
    for (int i = 0; i < repeats - 1; i++)
    {
        std::strcat(buffer, lhs.str);
    }

    Mystring temp{buffer};
    delete[] buffer;
    return temp;
}
Mystring Mystring::operator*=(int repeats)
{
    char *buffer = new char[std::strlen(this->str) * repeats + 1];
    std::strcpy(buffer, this->str);
    for (int i = 0; i < repeats - 1; i++)
    {
        std::strcat(buffer, this->str);
    }

    delete[] this->str;
    this->str = buffer;
    return *this;
}

Mystring &operator++(Mystring &obj)
{
    for (int i = 0; obj.str[i]; i++)
    {
        obj.str[i] = std::toupper(obj.str[i]);
    }

    return obj;
}
Mystring operator++(Mystring &obj, int)
{
    Mystring temp{obj};
    operator++(obj);
    return temp;
}
Mystring &operator--(Mystring &obj)
{
    for (int i = 0; obj.str[i]; i++)
    {
        obj.str[i] = std::tolower(obj.str[i]);
    }

    return obj;
}
Mystring operator--(Mystring &obj, int)
{
    Mystring temp{obj};
    operator--(obj);
    return temp;
}