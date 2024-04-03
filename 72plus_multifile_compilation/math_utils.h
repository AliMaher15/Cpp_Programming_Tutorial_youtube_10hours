#ifndef UTILS
#define UTILS

// declaration and default arguments

struct Rectangle
{
    double length;
    double width;
};

double area(double length, double width);

double area(double length);

double area(Rectangle rect);

double pow(double base, int pow = 2);

#endif