#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    string greeting;
    cin >> greeting;
    // it stops on whitespace or newline
    string left_over;
    cin >> left_over;

    cout << greeting << endl;
    cout << left_over << endl;

    // so what is the best way to get string input
    getline(std::cin, greeting);
    cout << greeting << endl;
    
}