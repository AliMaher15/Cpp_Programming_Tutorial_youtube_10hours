#include <iostream>
#include <climits>
using std::cout;
using std::endl;

int main()
{
    int x = 999999999999;
    // warning will change type to long long

    short a;
    int b;
    long c; // at least 32 bits
    long long d; // at least 64 bits
    // short <= int <= long <= long long
    unsigned short aa;
    unsigned int   bb;
    unsigned long  cc;
    unsigned long long dd;
    // sizeof prints size in bytes
    cout << "\nshort: " << sizeof(short) << std::endl;
    cout << "int: "     << sizeof(int) << std::endl;
    cout << "long: "    << sizeof(long) << std::endl;
    cout << "long2: "   << sizeof(long long) << std::endl;

    cout << "\nshort: " << SHRT_MAX << SHRT_MIN << std::endl;
    cout << "unsigned long2: " << ULLONG_MAX << std::endl;
}