#include <iostream>

using namespace std;

class Player
{
private:
    string name;
    int health;
    int xp;

public:
    string get_name(void) const
    {
        return this->name;
    }

    void set_name(string name)
    {
        this->name = name;
    }
    Player();
    Player(string name);
    Player(string name, int health, int xp);
};

Player::Player(string name, int health, int xp)
    : name{name}, health{health}, xp{xp}
{
}

Player::Player(string name)
    : Player{name, 0, 0}
{
}

Player::Player()
    : Player{"None", 0, 0}
{
}

void display_player_name(const Player &source)
{
    cout << source.get_name() << endl;
}

int main()
{
    const Player villain{"Villain", 100, 55};
    Player hero{"Hero", 100, 15};

    // villain.set_name("Super Villain");
    cout << villain.get_name() << endl;
    cout << hero.get_name() << endl;

    hero.set_name("Super Hero");

    display_player_name(villain);
    display_player_name(hero);

    return 0;
}