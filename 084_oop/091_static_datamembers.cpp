#include <iostream>
#include <vector>

class User
{
private:
    static int user_count;
    std::string status = "Gold";
public:
    static int get_user_count()
    {
        return user_count;
    }
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
        user_count++;
    }
    User(std::string first_name, std::string last_name, std::string status)
    {
        this->first_name = first_name;
        this->last_name = last_name;
        this->status = status;
        user_count++;
    }
    ~User()
    {
        std::cout << "Destructor\n";
        user_count--;
    }
};
int User::user_count = 0;

int main()
{
    User user, user2, user3, user4;
    std::cout << User::get_user_count() << std::endl;
    user.~User();
    std::cout << User::get_user_count() << std::endl;
}