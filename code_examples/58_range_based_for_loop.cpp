#include <iostream>
#include <array>
#include <vector>

int main()
{
    int data[] = {1, 2, 3, 4, 5, 6};
    std::vector<int> data2 = {1, 2, 3, 4, 5, 6};

    // normal for loop
    for(int i = 0; i < 6; i++) {
        std::cout << data[i] << "\t";
    }
    std::cout << std::endl;

    // range based for loop
    for(int n : data) {
        std::cout << n << "\t";
    }
    std::cout << std::endl;
    for(int n : data2) {
        std::cout << n << "\t";
    }
    std::cout << std::endl;
}