#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

// function declaration
double power(double, int);
// can declare and define together

int main()
{
    int base, exponent;
    cout << "\nWhat is the base?: ";
    cin >> base;
    cout << "What is the exponent?: ";
    cin >> exponent;
    double myPower = power(base, exponent);
    //double power = pow(base, exponent);
    cout << myPower << endl;
}

// function definition
double power(double base, int exponent)
{
    double result = 1;
    for(int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}