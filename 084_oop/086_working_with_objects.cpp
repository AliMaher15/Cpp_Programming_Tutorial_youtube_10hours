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
};

int add_user_if_not_exists(std::vector<User> &users, User user)
{
    for(int i = 0; i < users.size(); i++)
    {
        if(users[i].first_name == user.first_name &&
           users[i].last_name  == user.last_name)
        {
            return i;
        }
    }
    users.push_back(user);
    return users.size() - 1;
}

int main()
{
    std::vector<User> users;
    
    User user1, user2, user3;

    user1.first_name = "Sally"; user1.last_name = "Swan";
    user2.first_name = "Jake";  user2.last_name = "Johnson";
    user3.first_name = "Caleb"; user3.last_name = "Curry";

    users.push_back(user1); users.push_back(user2); users.push_back(user3);

    User user;
    user.first_name = "Jake";  user.last_name = "Johnson";
    std::cout << add_user_if_not_exists(users, user) << std::endl;

    User user4;
    user4.first_name = "Jacob";  user4.last_name = "Johnson";
    std::cout << add_user_if_not_exists(users, user4) << std::endl;
    std::cout << users.size() << std::endl;
}