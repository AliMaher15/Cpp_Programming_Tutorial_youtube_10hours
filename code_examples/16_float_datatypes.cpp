#include <iostream>
#include <float.h>
using std::cout;
using std::endl;

int main()
{
    float       a;
    double      b = 77000; // 7.7E4
    long double c;
    
    // 7.7 * 10000 = 77000
    // means: move .7 four places to the left

    a = 10.0 / 3 ;
    cout << "\n" << a << endl;
    a = a * 1000000000000;
    cout << "a = " << std::fixed << a << endl; 

    cout << "Trusted float digits " << FLT_DIG << endl; // print precision
    cout << "Trusted double digits " <<  DBL_DIG << endl;
    cout << "Trusted Long double digits " <<  LDBL_DIG << endl;
    b = (10.0 / 3) * 1000000000000;
    c = (10.0 / 3) * 1000000000000;
    cout << "b = " << std::fixed << b << endl;
    cout << "c = " << std::fixed << c << endl;
}