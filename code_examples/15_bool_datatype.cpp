#include <iostream>
#include <climits>
using std::cout;
using std::endl;

int main()
{
    bool pizza_is_good = 0;
    // zero is false
    // anything else is true
    cout << pizza_is_good << std::endl;
    pizza_is_good = -1;
    cout << pizza_is_good << std::endl;

    // used as a flag
    bool found = false;
    // search algorithm -> if found, found = true;
    if(true)
    {
        cout << "Hello";
    }

    // make output be true or false
    cout << std::boolalpha << found << endl;
    // another method
    if(found) cout << "This is true";
}