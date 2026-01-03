#include "Harl.hpp"

int main()
{
    Harl harl;
    
    std::cout << "test : DEBUG " << std::endl;
    harl.complain("DEBUG");

    std::cout << '\n' << std::endl;

    std::cout << "test : INFO " << std::endl;
    harl.complain("INFO");

    std::cout << '\n' << std::endl;

    std::cout << "test : WARNING " << std::endl;
    harl.complain("WARNING");

    std::cout << '\n' << std::endl;

    std::cout << "test : ERROR " << std::endl;
    harl.complain("ERROR");

    return 0;
}