#include <iostream>
#include <vector>

// & : pass by reference
void print_vector(std::vector<int> &data)
{
    // edit main vector
    //data.push_back(12);
    for (int i = 0; i < data.size(); i++)
    {
        std::cout << data[i] << "\t";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> data = {1, 2, 3};
}