#include <iostream>
// if used "using namespace std;:, you don't need
// to write std in code
// but it is not recommended in big projects

// using namespace std;
int main() // main function
{
    // cout is inside <iostream>
    // std is a namespace
    // namespace: grouping of code in case 
    // of functions have same name
    std::cout << "Hello World\n";
    return 0;
}

// to compile: g++ <filename>.cpp
// to execute: ./<filename>.out