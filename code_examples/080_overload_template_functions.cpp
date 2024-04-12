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

template<typename T>
void swap(T a[], T b[], int size)
{
    for(int i = 0; i < size; i++) {
        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

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

    int nines[] = {9, 9, 9, 9, 9, 9};
    int ones[]  = {1, 1, 1, 1, 1, 1};
    for(int i = 0; i < 6; i++) {
        std::cout << nines[i] << " " << ones[i] << "\t";
    }
    std::cout << "\n";
    swap(nines, ones, 6);
    for(int i = 0; i < 6; i++) {
        std::cout << nines[i] << " " << ones[i] << "\t";
    }
}