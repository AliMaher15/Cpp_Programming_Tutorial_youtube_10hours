#include <iostream>
#include <climits>
using std::cout;
using std::endl;

int main()
{
    // new line
    cout << "\n"; 
    // tap
    cout << "Hello\tThere" << endl; 
    // delete a character
    cout << "Hello\bThere" << endl; 
    // vertical tap
    cout << "Hello\vThere" << endl;
    // sound notification
    cout << "Hello\aThere" << endl;
    // null terminating character
    cout << "\0" << endl; // that string is over
    // print double quote in string
    cout << "Hello \"there\" ' " << endl;
    char single_quote = '\''; 
    // print backslash
    cout << "\\" << endl;
}