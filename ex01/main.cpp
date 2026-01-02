#include "Zombie.hpp"

int main()
{
    int N = 7;
    Zombie *p = zombieHorde(N,"hamza");

    for(int i = 0 ; i < N ;i++)
        p[i].announce();

    delete[]p;
    return 0;
}