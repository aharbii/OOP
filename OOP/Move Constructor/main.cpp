#include <iostream>
#include <vector>

using namespace std;

class Move
{
private:
    int *data;

public:
    void set_data_value(int d);
    int get_data_value(void);
    /* Constructor */
    Move(int d);
    /* Copy Constructor (Deep) */
    Move(const Move &source);
    /* Move Constructor */
    Move(Move &&source) noexcept;
    /* Destructor */
    ~Move();
};

Move::Move(int d)
{
    data = new int;
    *data = d;
    cout << "Constructor for: " << *data << endl;
}

Move::Move(const Move &source)
    : Move(*source.data)
{
    cout << "Copy constructor - Deep copy for: " << *data << endl;
}

Move::~Move()
{
    if (data != nullptr)
    {
        cout << "Destructor freeing data for: " << *data << endl;
    }
    else
    {
        cout << "Destructor freeing data for nullptr" << endl;
    }

    delete data;
}

Move::Move(Move &&source) noexcept
    : data{source.data}
{
    source.data = nullptr;
    cout << "Move Constructor - moving resource: " << *data << endl;
}

int main()
{
    vector<Move> vec;
    vec.push_back(Move{10});
    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
    vec.push_back(Move{50});
    vec.push_back(Move{60});
    vec.push_back(Move{70});
    vec.push_back(Move{80});
    vec.push_back(Move{90});
    return 0;
}