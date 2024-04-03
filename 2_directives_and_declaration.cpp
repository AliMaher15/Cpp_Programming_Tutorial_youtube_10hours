#include <iostream>
// using directives
using namespace std;
// using declaration (global scope)
using std::cout; // only bring cout
int main()
{
    //using std::cout
    cout << "Hello World\n";
}

void test()
{
    cout << "Hello World\n";
}