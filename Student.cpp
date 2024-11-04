#include "Student.h"
#include <iostream>
#include <string>

Student::Student(std::string name, std::string id) : _name(name), _id(id) {};

void Student::SetNextStudent(Student *nextStudent)
{
    _nextStudent = nextStudent;
}

Student *Student::GetNextStudent()
{
    return _nextStudent;
}

std::string Student::GetName()
{
    return _name;
}

std::string Student::GetId()
{
    return _id;
}

void Student::SetName(std::string name)
{
    _name = name;
}

void Student::SetId(std::string id)
{
    _id = id;
}