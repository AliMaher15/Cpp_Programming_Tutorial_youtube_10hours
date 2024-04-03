#include <iostream>
#include <cmath>
using std::cout;
using std::endl;

int main()
{
    // square root
    cout << sqrt(25) << endl;
    cout << sqrt(-25) << endl;
    // negative sqrt will produce imaginary number
    // which is nan (not a number)

    // to get inf (infinity)
    cout << pow(9, 999) << endl;

    // to print them
    cout << NAN << endl;
    cout << INFINITY << endl;

    // remainder function can return float
    // but % will return error if used float
    cout << remainder(10, 3) << endl;
    cout << 10 % 3 << endl;
    cout << remainder(10, 3.25) << endl;
    cout << fmod(10, 3.25) << endl;

    // return highest and lowest
    cout << fmax(10, 3.25) << endl;
    cout << fmin(10, 3.25) << endl;

    // rounding of float
    cout << ceil(3.25) << endl; 
    cout << floor(3.25) << endl; 
    // difference between trunc and floor
    cout << floor(-1.5) << endl; // round to 2 (lowest number)
    cout << trunc(-1.5) << endl; // crop after decimal

    // round to int
    cout << round(-1.5) << endl;
    cout << round(-1.49) << endl;
}