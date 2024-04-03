#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <array>
#include <cstdlib>
#include <ctime>

void save_score(int guess_count) 
{
    std::ifstream input("best_score.txt");
    if(!input.is_open()) {
        std::cout << "Unable to read best_score file\n";
        return;
    }

    int best_score;
    input >> best_score;

    std::ofstream output("best_score.txt");
    if(!output.is_open()) {
        std::cout << "Unable to read best_score file\n";
        return;
    }

    if(guess_count < best_score) {
        output << guess_count; 
    } else {
        output << best_score;
    }
}

void print_vector(std::vector<int> vector)
{ 
    for (int i = 0; i < vector.size(); i++) {
        std::cout << vector[i] << "\t";
    }
    std::cout << std::endl;
}

void play_game()
{
    std::vector<int> guesses;

    int random = rand() % 251;
    std::cout << random << std::endl;

    while(true)
    {
        int guess;
        std::cout << "Guess a number: ";
        std::cin >> guess;
        //assign then increment guess_count
        guesses.push_back(guess);
        if(guess == random) {
            std::cout << "You Win!\n";
            break;
        } else if (guess < random) {
            std::cout << "Too low\n";
        } else {
            std::cout << "Too high\n";
        }
    } 
    save_score(guesses.size());
    print_vector(guesses);
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