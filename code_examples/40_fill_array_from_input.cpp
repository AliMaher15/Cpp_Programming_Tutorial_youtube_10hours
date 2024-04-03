#include <iostream>
#include <limits>

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
    const int SIZE = 100;
    int guesses[SIZE];

    // fill array
    int count = 0;
    std::cout << "Start filling the array:\n" ;
    for (int i = 0; i < SIZE; i++) {
        if(std::cin >> guesses[i]) { // return cin
            // input worked
            count++;
        } else {
            // invalid character
            std::cout << "invalid input (exiting loop)\n";
            // if cin return false, we have to clear cin
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), 'n');
            break;
        }
    }
    std::cout << std::endl;

    print_array(guesses, count);

    
}