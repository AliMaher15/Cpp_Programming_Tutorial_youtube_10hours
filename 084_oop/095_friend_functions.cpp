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
    friend void output_status(User user);
    friend std::ostream& operator << (std::ostream& output,const User user);
    friend std::istream& operator >> (std::istream& input,User &user);
};
int User::user_count = 0;

void output_status(User user)
{
    std::cout << user.status << std::endl;
}

std::ostream& operator << (std::ostream& output,const User user)
{
    output << "First name: " << user.first_name << "\n" <<
    "Last name: " << user.last_name << "\nStatus: " << user.status;
}

std::istream& operator >> (std::istream& input,User &user)
{
    input >> user.first_name >> user.last_name;
    return input;
}

int main()
{
    User user;
    user.first_name = "caleb";
    user.last_name = "curry";
    user.set_status("Gold");
    output_status(user);

    std::cout << user << std::endl;

}