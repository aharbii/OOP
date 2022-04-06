#include "player.h"

int Player::num_players = 0;

Player::Player(std::string name, int health, int xp)
    : name{name}, health{health}, xp{xp}
{
    num_players += 1;
}

Player::~Player()
{
    num_players -= 1;
}

Player::Player(const Player &source)
    : Player{source.name, source.health, source.xp}
{
}

std::string Player::get_name(void)
{
    return this->name;
}

int Player::get_health(void)
{
    return this->health;
}

int Player::get_xp(void)
{
    return this->xp;
}

int Player::get_num_players(void)
{
    return num_players;
}