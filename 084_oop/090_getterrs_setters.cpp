#include <iostream>
#include <vector>

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
    void set_status(std::string status)
    {
        if(status == "Gold" || status == "Silver" || status == "Bronze")
        {
            this->status = status;
        } else {
            this->status = "No status";
        }
        
    }
    User()
    {
        std::cout << "Constructor\n";
    }
    User(std::string first_name, std::string last_name, std::string status)
    {
        this->first_name = first_name;
        this->last_name = last_name;
        this->status = status;
    }
    ~User()
    {
        std::cout << "Destructor\n";
    }
};

int main()
{
    User user;
    user.set_status("Tacos");
    std::cout << user.get_status() << std::endl;
}