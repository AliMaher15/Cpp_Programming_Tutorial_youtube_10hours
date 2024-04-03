#include <iostream>
#include <string>
int main()
{
    int i = 0;
    while (i < 10)
    {
        std::cout << i << "\t";
        i++; // should be at the bottom
    }
    std::cout << std::endl;

    i = 9;
    while (i >= 0)
    {
        std::cout << i << "\t";
        i--;
    }
    std::cout << std::endl;

    // factorial
    int factorial = 5; // 5*4*3*2*1
    i = factorial-1;
    while(i > 1) // till 2
    {
        factorial *= i;
        i--;
    }
    std::cout << factorial << std::endl;
}