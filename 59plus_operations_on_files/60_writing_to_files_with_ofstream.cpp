#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main() 
{
    // instantiate an object "file" of class ofstream
    std::ofstream file ("hello.txt"); // generate an empty file
    //file.open("hello.txt");
    // to append add ("hello.txt", std::ios::app)

    // check if file opened successfully
    if(file.is_open()) {
        std::cout << "success n00b\n";
    }

    // tell the user which file to open
    std::string filename;
    std::cin >> filename;
    std::ofstream userfile (filename.c_str());

    std::vector<std::string> names;
    names.push_back("Caleb");
    names.push_back("Amy");
    names.push_back("Susan");

    for(std::string name : names) {
        file << name << std::endl;
        userfile << name << std::endl;
    }

    file.close();
    userfile.close();
}