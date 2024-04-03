#include <iostream>
#include <string>
int main()
{
    int age;
    std::cout << "What is your age?: ";
    std::cin >> age;

    switch (age) // must be int
    {
    case 13:
        std::cout << "Your age is 13. Wow" << std::endl;
        break; // if didn't use it, all cases will hit
    case 14:
        std::cout << "You are 14" << std::endl;
        break;
    case 15:
    case 16: // for both 15 and 16 cases
        std::cout << "You are 15 or 16" << std::endl;
        break;
    default:
        std::cout << "Catch all" << std::endl;
        return 0; // can use it instead of break, exit function
    }

    /********** enums and switches *************/
    enum season {summer, spring, fall, winter};
    // can do enum class Season {...} ;
    // then when assigning Season::winter;
    season now = winter;
    switch (now)
    {
    case summer:
        break;
    case spring:
        break;
    case fall:
        break;
    case winter:
        std::cout << "Stay Warm!" << std::endl;
        break;
    }
}