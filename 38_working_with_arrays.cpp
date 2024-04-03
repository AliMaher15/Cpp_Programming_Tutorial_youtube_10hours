#include <iostream>

int main()
{
    // now it has size of 7
    int guesses[] = {10, 13, 54, 42, 12, 12, 13};
    std::cout << guesses[3] << std::endl;
    guesses[3] = 400;
    std::cout << guesses[3] << std::endl;
    /****************************************/
    int gueses[20];
    gueses[0] = 10;
    //std::cin >> gueses[0];
    std::cout << gueses[0] << std::endl;
    /****************************************/
    int ges[10] = {12, 43, 23, 43, 23};
    int size = sizeof(ges); // return bytes
    std::cout << size << std::endl;
    size = sizeof(ges) / sizeof(ges[0]); // return number of elements
    std::cout << size << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << ges[i] << "\t";
    }
    std::cout << std::endl;
}