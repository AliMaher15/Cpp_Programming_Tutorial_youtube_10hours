#include <iostream>

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    std::cout << "swap: " << "a :" << a << "\tb: " << b << std::endl;
}

int main()
{
    int a = 10;
    int b = 20;
    swap(a, b);
    std::cout << "Main: " << "a :" << a << "\tb: " << b << std::endl;
}