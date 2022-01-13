#include <iostream>
#include <vector>

using namespace std;

void pass_by_reference1(int &num);
void pass_by_reference2(string &s);
void pass_by_reference3(vector<string> &v);
void print_vector(const vector<string> &v);

int main()
{
    int num{10};
    int another_num{20};

    cout << "num before calling pass_by_reference1: " << num << endl;
    pass_by_reference1(num);
    cout << "num after calling pass_by_reference1: " << num << endl;

    cout << "\nanther_num before calling pass_by_reference1: " << another_num << endl;
    pass_by_reference1(another_num);
    cout << "another_num after calling pass_by_reference1: " << another_num << endl;

    string name{"Frank"};
    cout << "\nname before calling pass_by_reference2: " << name << endl;
    pass_by_reference2(name);
    cout << "name after calling pass_by_reference2: " << name << endl;

    vector<string> stooges{"Larry", "Moe", "Curly"};
    cout << "\nstooges before calling pass_by_reference3: ";
    print_vector(stooges);
    pass_by_reference3(stooges);
    cout << "stooges after calling pass_by_reference3: ";
    print_vector(stooges);

    return 0;
}

void pass_by_reference1(int &num)
{
    num = 1000;
}

void pass_by_reference2(string &s)
{
    s = "Changed";
}

void pass_by_reference3(vector<string> &v)
{
    v.clear();
}

void print_vector(const vector<string> &v)
{
    for (auto element : v)
    {
        cout << element << " ";
    }
    if (v.empty())
    {
        cout << "Empty vector" << endl;
    }
    
    cout << endl;
}