#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    string name;
    int health;
    int xp;

public:
    void set_name(string n) { name = n; };
    string get_name() { return name; };
    Player()
    {
        name = "None";
        health = 100;
        xp = 3;
    };
    Player(string name_val, int health_val, int xp_val)
    {
        name = name_val;
        health = health_val;
        xp = xp_val;
    };
};

int main()
{
    Player frank{"Frank", 100, 13};
    cout << frank.get_name() << endl;
    Player hero;
    cout << hero.get_name() << endl;
    return 0;
}