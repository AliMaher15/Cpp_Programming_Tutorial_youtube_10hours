#include <iostream>

int main()
{
    // size of how many collections must be added
    int grades[][3] = {
        {1, 2}, 
        {3, 4}, 
        {5, 6}};


    // iterate through the array
    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 2; col++)
        {
            std::cout << grades[row][col] << "\t";
        }
        std::cout << std::endl;
    }
}