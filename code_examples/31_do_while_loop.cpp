#include <iostream>
#include <string>
int main()
{
    // use do while when you want something
    // to happen at least once
    std::string password = "hellotacos123";
    std::string guess;
    do 
    {
        std::cout << "Guess the password: ";
        std::cin >> guess;
    } while(guess != password);
    // while(false) only run once then exit
}