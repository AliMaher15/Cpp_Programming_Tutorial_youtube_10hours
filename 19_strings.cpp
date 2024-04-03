#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

int main()
{
    string greeting = "hello";
    cout << greeting[0] << endl; 
    // default is "" (empty string)

    // string concatanation
    cout << greeting + " there" << endl; 
    string complete_greeting = greeting + " there";
    cout << complete_greeting << endl; 

    // append
    complete_greeting += "!";
    cout << complete_greeting << endl;

    // string is a class, length is a member function
    cout << complete_greeting.length() << endl;
    // method == member function == functions attached to objects

    char name[] = "Caleb"; // c string == array of characters
    // "Caleb\0"
    // can only assign strings with same length

    // get string from user input
    std::string greet;
    std::cout << "input your string: ";
    std::cin >> greet; // only grabs first word
    std::cout << greet << std::endl;
}