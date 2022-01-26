#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{
private:
    // attributes
    string name{"Player"};
    int health{100};
    int xp{3};
public:
    // methods
    void talk(string text_to_say) { cout << name << " says " << text_to_say << endl; };
    bool is_dead();
};

int main()
{
    Player frank;
    frank.talk("Hello there ");

    return 0;
}