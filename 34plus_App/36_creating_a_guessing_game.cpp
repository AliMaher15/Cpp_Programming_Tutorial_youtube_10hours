#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

void play_game()
{
    int random = rand() % 251; // rand from 0 to 250
    std::cout << random << std::endl; // to debug
    // indefinite loop
    while(true)
    {
        int guess;
        std::cout << "Guess a number: ";
        std::cin >> guess;
        if(guess == random) {
            std::cout << "You Win!\n";
            break;
        } else if (guess < random) {
            std::cout << "Too low\n";
        } else {
            std::cout << "Too high\n";
        }
    }
}

int main()
{
    srand(time(NULL)); // update seed
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
                play_game();
                break;
            default:
                break;
        }
    } while (choice != 0);
    
    

}