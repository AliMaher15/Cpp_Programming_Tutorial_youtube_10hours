#include <iostream>
#include "math_utils.h"

// definition

double area(double length, double width)
{
    std::cout << "arguments are length and width\n";
    return length*width;
}
double area(double length)
{
    std::cout << "arguments are length only\n";
    return length*length;
}
double area(Rectangle rect)
{
    std::cout << "arguments are Rectangle struct\n";
    return rect.length * rect.width;
}

double pow(double base, int pow)
{
    int total = 1;
    for (int i = 0; i < pow; i++)
    {
        total *= base;
    }
    return total;
}