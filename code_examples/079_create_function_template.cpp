#include <iostream>
#include <string>

template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
    std::cout << "swap: " << "a:" << a << "\tb: " << b << std::endl;
}
/*
void swap(std::string &a, std::string &b)
{
    std::string temp = a;
    a = b;
    b = temp;
    std::cout << "swap: " << "a: " << a << "\tb: " << b << std::endl;
}
*/

int main()
{
    int a = 10;
    int b = 20;
    swap(a, b);
    std::cout << "Main: " << "a :" << a << "\tb: " << b << std::endl;

    std::string first_name = "Caleb";
    std::string last_name = "Curry";
    swap(first_name, last_name);
    std::cout << "Main: " << first_name << " " << last_name << std::endl;
}