#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>

class Player
{
private:
    std::string name;
    int health;
    int xp;
    static int num_players;
public:
    std::string get_name(void);
    int get_health(void);
    int get_xp(void);
    Player(std::string name = "None", int health = 0, int xp = 0);
    Player(const Player &source);
    ~Player();
    static int get_num_players(void);
};

#endif 