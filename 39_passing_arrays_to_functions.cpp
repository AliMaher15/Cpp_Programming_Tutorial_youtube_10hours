#include <iostream>

void print_array(int array[], int size)
{
    // will return size of an int pointer
    //std::cout << sizeof(array) << std::endl; 
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << "\t";
    }
    std::cout << std::endl;
}

int main()
{
    int guesses[] = {12, 43, 23, 43, 23};
    std::cout << sizeof(guesses) << std::endl;

    int size = sizeof(guesses) / sizeof(int);
    print_array(guesses, size);
}