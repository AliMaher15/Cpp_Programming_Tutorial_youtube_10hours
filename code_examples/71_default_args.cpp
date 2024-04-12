#include <iostream>
#include <string>

struct Rectangle
{
    double length;
    double width;
};

// Advice: do default arguments on the right
double pow(double base, int pow = 2)
{
    int total = 1;
    for (int i = 0; i < pow; i++)
    {
        total *= base;
    }
    return total;
}
/*
double pow(double base)
{
    return base * base;
}
*/
int main()
{
    std::cout << pow(3, 3) << std::endl;
    std::cout << pow(3) << std::endl;
}