#include <iostream>
#include <string>
int main()
{
    int answer = 11;
    std::cout << "Guess the number: ";
    int guess;
    std::cin >> guess;
    
    int points = (guess == answer) ? 10 : 0;
    
    std::cout << points << std::endl;

    guess == answer ? std::cout << "Good job\n" : std::cout << "Bad job\n";
}