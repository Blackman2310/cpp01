#include <string>
#include <iostream>

int main()
{
    std::string ptr = "HI THIS IS BRAIN";
    std::string *stringPTR  = &ptr;
    std::string  &stringREF = ptr;

    std::cout << "The address of the ptr = " << &ptr << std::endl;
    std::cout << "The address of stringPTR = " << stringPTR << std::endl;
    std::cout << "The address of stringREF " << &stringREF << std::endl;
    std::cout << "--------------------------------" <<std::endl;

    std::cout << "The value of the ptr = " << ptr << std::endl;
    std::cout << "The value of stringPTR = " << *stringPTR << std::endl;
    std::cout << "The value of stringREF " << stringREF << std::endl;

}