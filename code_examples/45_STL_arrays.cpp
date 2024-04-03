/*
std::array<int, 5>

it is statically allocated like arrays
it remembers the size like vectors
*/
#include <iostream>
#include <vector>
#include <array>

// & : pass by reference
void print_array(std::array<int, 20> &data, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << data[i] << "\t";
    }
    std::cout << std::endl;
}

int main()
{
    std::array<int, 20> data = {1, 2, 3};
    print_array(data, 3);
}