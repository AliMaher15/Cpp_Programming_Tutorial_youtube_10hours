#include <iostream>
#include <string>
#include "user.h"
#include "teacher.h"


int main()
{
    User user;
    std::cout << "Enter you information:\n";
    std::cin >> user;
    std::cout << user << std::endl;

    Teacher teacher;
    teacher.output();

}