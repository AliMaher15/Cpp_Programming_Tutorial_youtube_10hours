#include <iostream>

class User
{
private:
    std::string status = "Gold";
public:
    std::string first_name;
    std::string last_name;
    std::string get_status()
    {
        return status;
    }
};

int main()
{
    User me;
    me.first_name = "Caleb";
    me.last_name = "Curry";
    //me.status = "Gold";

    std::cout << "First name: " << me.first_name << std::endl;
    std::cout << "Status: " << me.get_status() << std::endl;
}