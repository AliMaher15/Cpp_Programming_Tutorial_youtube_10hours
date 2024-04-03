#include <iostream>
#include <string>
int main()
{
    int number = 30; //base 10
    std::cout << number << std::endl;
    // change printing
    std::cout << "30 in hexa : " << std::hex << number << std::endl;
    std::cout << "30 in octal: " << std::oct << number << std::endl;
    
    // hexa
    number = 0x30; // 30 in base hexa
    std::cout << "30 hexa in base10: " << number << std::endl; // print in base 10
    std::cout << std::hex << number << std::endl;

    // octal
    number = 030; // 30 in base octal
    std::cout << "30 oct in base10: " << number << std::endl;
    std::cout << std::oct << number << std::endl;
}