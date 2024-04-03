#include <iostream>
// for pow function
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    cout << pow(10, 2);

    int base, exponent;
    cout << "\nWhat is the base?: ";
    cin >> base;
    cout << "What is the exponent?: ";
    cin >> exponent;
    double power = pow(base, exponent);
    cout << power << endl;
}