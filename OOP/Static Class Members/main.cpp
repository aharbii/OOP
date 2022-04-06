#include <iostream>
#include "player.h"

using namespace std;

void display_active_players(void)
{
    cout << "Active Players: " << Player::get_num_players() << endl;
}

int main()
{
    display_active_players();
    Player hero;
    display_active_players();
    cout << hero.get_name() << endl;
    {
        Player frank{"Frank"};
        display_active_players();
        cout << frank.get_name() << endl;
    }
    display_active_players();

    Player *enemy = new Player{"Enemy", 100, 100};
    display_active_players();
    cout << enemy->get_name() << endl;
    delete enemy;
    display_active_players();
    return 0;
}