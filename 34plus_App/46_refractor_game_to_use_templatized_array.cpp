#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <cstdlib>
#include <ctime>

void print_array(std::array<int, 251> array, int size)
{ 
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << "\t";
    }
    std::cout << std::endl;
}

void play_game()
{
    std::array<int, 251> guesses;
    int count = 0;

    int random = rand() % 251;
    std::cout << random << std::endl;

    while(true)
    {
        int guess;
        std::cout << "Guess a number: ";
        std::cin >> guess;
        //assign then increment guess_count
        guesses[count++] = guess;
        if(guess == random) {
            std::cout << "You Win!\n";
            break;
        } else if (guess < random) {
            std::cout << "Too low\n";
        } else {
            std::cout << "Too high\n";
        }
    }
    print_array(guesses, count);
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