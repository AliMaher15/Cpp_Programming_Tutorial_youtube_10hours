#include <iostream>
#include <string>
int main()
{
    std::string answer = "Caleb";
    std::string guess;
    std::cout << "Guess my name: ";
    std::cin >> guess;

    // the equals operator
    if(guess == answer)
    {
        std::cout << "You got the name right!" << std::endl;
    }

    int age_answer = 63;
    int age_guess;
    std::cout << "Guess my age: ";
    std::cin >> age_guess;

    // And logical operator
    if(guess == answer && age_guess == age_answer)
    {
        std::cout << "You got both right!" << std::endl;
    }

    //
    if(guess == answer && age_guess == age_answer)
    {
        std::cout << "You got both right!" << std::endl;
    } // OR operator
    else if (guess == answer || age_guess == age_answer)
    {
        std::cout << "You got One right!" << std::endl;
    }

    //
    if(guess == answer && age_guess == age_answer)
    {
        std::cout << "You got both right!" << std::endl;
    } // Not operator
    else if ( !(guess == answer) || age_guess == age_answer)
    {
        std::cout << "You got age right!, but name wrong" << std::endl;
    }
    else if ( (guess == answer) || (age_guess != age_answer))
    {
        std::cout << "You got name right!, but age wrong" << std::endl;
    }

    /*
    logical:
     && 
     ||
     !

    comparison
     ==
     !=
     <  >
     <= >=
    */
}