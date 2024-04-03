#include <iostream>
#include <string>
int main()
{
    // 0 to 9
    for (int i = 0; i < 10; i++)
    {
        std::cout << i << std::endl;
    }
    std::cout << std::endl;
    
    // 1 to 10
    for (int i = 1; i < 11; i++)
    {
        std::cout << i << std::endl;
    }
    std::cout << std::endl;
    
    // 9 to 0
    for (int i = 9; i >= 0; i--)
    {
        std::cout << i << std::endl;
    }
    std::cout << std::endl;

    // calculate factorial
    int fact = 5;
    int factorial = fact;
    for (int i = factorial-1; i > 0; i--)
    {
        factorial = factorial * i;
    }
    std::cout << "factorial of " << fact << " = " << factorial << std::endl;

}