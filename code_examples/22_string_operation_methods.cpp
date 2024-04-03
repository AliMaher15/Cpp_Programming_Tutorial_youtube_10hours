#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    std::string greeting = "What the hell?";

    // finding a cus word
    greeting.replace(greeting.find("hell"), 4, "****");
    std::cout << greeting << std::endl;

    // extract a part of string
    greeting = "What is up?";
    // substr(idx, length)
    cout << greeting.substr(5, 2) << endl;

    // find_first_of: return index of first found in string
    cout << greeting.find_first_of("aeiou") << endl;
    cout << greeting.find_first_of("!") << endl;
    // npos == -1 
    unsigned long x = -1;
    cout << x << endl;
    if(greeting.find_first_of("!") == -1)
        cout << "NOT FOUND!!" << endl;

    // string comparisons
    greeting = "What is up?";
    // == is more recommended in c++
    if(greeting == "What is up?")
        cout << "Equals" << endl;
    // compare: return zero if equals
    if(greeting.compare("What is up?") == 0)
        cout << "Equals" << endl;
}