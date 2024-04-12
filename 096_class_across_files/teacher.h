#ifndef TEACHER_H
#define TEACHER_H

#include <vector>
#include <string>
#include <iostream>
#include "user.h"

class Teacher : public User 
{
    std::vector<std::string> classes_teaching;
public:
    void output();
};
#endif