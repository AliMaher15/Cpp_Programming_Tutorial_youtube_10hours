#include <iostream>
#include <string>
#include "user.h"


int User::get_user_count()
{
    return user_count;
}

std::string User::get_status()
{
    return status;
}

void User::set_status(std::string status)
{
    if(status == "Gold" || status == "Silver" || status == "Bronze")
    {
        this->status = status;
    } else {
        this->status = "No status";
    }
    
}

User::User()
{
    user_count++;
}

User::User(std::string first_name, std::string last_name, std::string status)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->status = status;
    user_count++;
}

User::~User()
{
    user_count--;
}

int User::user_count = 0;

std::ostream& operator << (std::ostream& output,const User user)
{
    output << "First name: " << user.first_name << "\n" <<
    "Last name: " << user.last_name << "\nStatus: " << user.status;
}

std::istream& operator >> (std::istream& input,User &user)
{
    input >> user.first_name >> user.last_name >> user.status;
    return input;
}