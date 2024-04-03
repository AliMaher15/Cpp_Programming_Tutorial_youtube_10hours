#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    // c++11, will decide type automatically
    auto x = 5U; // U: unsiged
    auto y = 5UL; // UL: unsiged long
    auto z = 5ULL; // ULL: unsiged long long

    auto z = 5.0; // double
    auto z = 5.0F; // float
}