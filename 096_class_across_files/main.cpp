#include <iostream>
#include <string>
#include "user.h"


int main()
{
    User user;
    std::cout << "Enter you information:\n";
    std::cin >> user;
    std::cout << user << std::endl;

}