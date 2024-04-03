#include <iostream>
#include <climits>
using std::cout;
using std::endl;

int main()
{
    // use single quotes
    char x = 'A'; // 8 bits
    
    cout << x << endl;
    // can type cast (turn litters with ASCII)
    cout << (int) x << endl;
    
    x = 65; // it reads ascii value
    cout << x << " " << (int) x << endl;

    x = 127; // max number
    x = 128; // will wrap around min number
    cout << x << " " << (int) x << endl;

    unsigned char y = 129;
    cout << y << " " << (int) y << endl;
}