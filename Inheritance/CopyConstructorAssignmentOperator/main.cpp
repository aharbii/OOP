// Section 15
// Copy constructor and operator=
#include <iostream>

using namespace std;

class Base
{
private:
    int value;

public:
    Base();
    Base(int value);
    Base(const Base &sourcr);
    Base &operator=(const Base &source);
    ~Base();
};

Base::Base()
{
    cout << "No-args constructor called for base" << endl;
}

Base::Base(int value)
    : value{value}
{
    cout << "One argument constructor called for base" << endl;
}

Base::Base(const Base &source)
    : Base{source.value}
{
    cout << "Copy constructor called for base" << endl;
}

Base::~Base()
{
    cout << "Destructor called for base" << endl;
}

Base &Base::operator=(const Base &source)
{
    if (this != &source)
    {
        this->value = source.value;
        cout << "Copy assignment operator for Base" << endl;
    }
    return *this;
}

class Derived : public Base
{
private:
    int doubled_value;

public:
    Derived();
    Derived(int value);
    Derived(const Derived &source);
    Derived &operator=(const Derived &source);
    ~Derived();
};

Derived::Derived()
    : Base{}
{
    cout << "No-args constructor called for derived" << endl;
}

Derived::Derived(int value)
    : Base{value}, doubled_value{value * 2}
{
    cout << "One argument constructor called for derived" << endl;
}

Derived::Derived(const Derived &source)
    : Base{source}, doubled_value{source.doubled_value}
{
    cout << "Copy constructor called for derived" << endl;
}

Derived::~Derived()
{
    cout << "Destructor called for derived" << endl;
}

Derived &Derived::operator=(const Derived &source)
{
    if (this != &source)
    {
        Base::operator=(source);
        this->doubled_value = source.doubled_value;
        cout << "Copy assignment operator for derived" << endl;
    }
    return *this;
}

int main()
{
    cout << "\n=== Base ==================================" << endl;
    Base a;
    cout << "\t\n=== B ==================================" << endl;
    Base b{10};
    cout << "\t\n=== D ==================================" << endl;
    Base d{b};
    d = a;
    cout << "\t\n=== C ==================================" << endl;
    Base c{b};

    cout << endl
         << endl
         << endl
         << endl;

    cout << "\n=== Derived ==================================" << endl;
    Derived x;
    cout << "\t\n=== Y ==================================" << endl;
    Derived y{10};
    cout << "\t\n=== W ==================================" << endl;
    Derived w{y};
    w = x;
    cout << "\t\n=== Z ==================================" << endl;
    Derived z{y};

    cout << "\n=== Destructors ==================================" << endl;
    return 0;
}