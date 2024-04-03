#include <iostream>
#include <string>

struct Rectangle
{
    double length;
    double width;
};

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

int main()
{
    Rectangle rectangle;
    rectangle.width = 10;
    rectangle.length = 10;
    
    std::cout << area(rectangle.length, rectangle.width) << std::endl;
    std::cout << area(rectangle.length) << std::endl;
    std::cout << area(rectangle) << std::endl;
}