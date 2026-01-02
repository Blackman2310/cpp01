#include "Zombie.hpp"


int main()
{
    std::cout << "alloction in stack" << std::endl;
    randomChump("stack");

    std::cout << "alloction in heap" << std::endl;
    Zombie* heap = newZombie("heap");
    heap->announce();
    
    delete(heap);
    return 0;
}