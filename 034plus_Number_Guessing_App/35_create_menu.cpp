#include <iostream>
#include <string>
int main()
{
    // user choice
    // must be outside of do-while to access
    int choice;
    do
    {
        // screen
        std::cout << "0. Quit" << std::endl;
        std::cout << "1. Play Game" << std::endl;
        std::cin >> choice;
        switch(choice)
        {
            case 0:
                std::cout << "Thanks for nothng\n";
                return 0; // program over
            case 1:
                std::cout << "yo let's play\n";
                break;
            default:
                break;
        }
    } while (choice != 0);
    
    

}