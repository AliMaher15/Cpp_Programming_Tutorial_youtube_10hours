#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main() 
{
    std::ifstream file ("tacos.txt");

    // extract data from file and save in names vector
    std::string input;
    std::vector<std::string> names;
    while(file >> input) // return file content (no space, newline)
    {
        names.push_back(input);
    }

    // print names vector
    for(std::string name : names) {
        std::cout << name << std::endl;
    }

    // get line
    std::string line;
    getline(file, line); // store first line in string 
    std::cout << line << std::endl;
    
}