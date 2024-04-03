#include <iostream>
#include <string>
int main()
{
    std::string sentence = "Hello my name is Caleb";

    // break
    for (int i = 0; i < sentence.size(); i++)
    {
        std::cout << sentence[i] << "\t";
        if(sentence[i] == 'o')
        {
            std::cout << "\nFound o!";
            break;
        }
    }
    std::cout << "\nfor loop done" << std::endl;

    // continue
    for (int i = 0; i < sentence.size(); i++)
    {
        if(sentence[i] == 'o')
        {
            continue;
        }
        std::cout << sentence[i] << "\t";
    }
    std::cout << "\nfor loop done" << std::endl;
}