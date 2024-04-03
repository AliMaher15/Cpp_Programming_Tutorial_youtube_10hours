#include <iostream>
#include <vector>

void do_something(const int data[])
{}

// const: read-only
void print_array(const int data[], int size)
{
    for (int i = 0; i < size; i++) {
        //data[i]++;
        std::cout << data[i] << "\t";
    }
    do_something(data);
}

int main()
{
    int data[] = {1, 2, 3};
    print_array(data, 3);
}