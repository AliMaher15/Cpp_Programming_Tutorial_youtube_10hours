#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    std::string greeting = "Hello";

    // length : number of characters in a string
    std::cout << greeting.length() << std::endl;
    std::cout << greeting.size() << std::endl;

    // Append(string)
    greeting += " There";
    std::cout << greeting << std::endl;
    greeting.append("!");
    std::cout << greeting << std::endl;

    // Insert(idx, string)
    greeting = "Hello";
    greeting.insert(3, "   ");
    std::cout << greeting << std::endl;

    // erase(idx, total amount)
    greeting.erase(3, 3);
    std::cout << greeting << std::endl;
    greeting.erase(3);
    std::cout << greeting << std::endl;

    // erase last character
    greeting = "Hello";
    greeting.erase(greeting.length() - 1);
    std::cout << greeting << std::endl;
    // another way
    greeting = "Hello";
    greeting.pop_back();
    std::cout << greeting << std::endl;

    // replace(start_idx, replaced_length, string)
    greeting.replace(0, 4, "Heaven");
    std::cout << greeting << std::endl;
    //
    greeting = "What the Hell";
    greeting.replace(9, 4, "****");
    std::cout << greeting << std::endl;

}