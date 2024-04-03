#include <iostream>
int main()
{
    // get from user
    int aged;
    std::cout << "How old are you: ";
    std::cin >> aged;
    //
    int age = 17;
    if(age < 13)
    {
        std::cout << "You're not old enough\n";

    }
    std::cout << "Always" << std::endl;

    //
    age = 11;
    if(age < 13)
    {
        std::cout << "You're not old enough\n";
        //return -1; // close the program
    }
    std::cout << "Second Always" << std::endl;

    // if-else
    age = 17;
    if(age < 13)
    {
        std::cout << "You're not old enough\n";
    }
    else
    {
        std::cout << "You are old" << std::endl;
    }

    // if-elseif-else
    age = 15;
    if(age < 13)
    {
        std::cout << "You're not old enough\n";
    }
    else if(age < 19)
    {
        std::cout << "You're almost 19" << std::endl;
    }
    else 
    {
        std::cout << "You're old" << std::endl;
    }

    return 0;
}