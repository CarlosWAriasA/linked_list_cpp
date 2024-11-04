#pragma once
#include <string>

class Student
{
private:
    std::string _name;
    std::string _id;
    Student *_nextStudent;

public:
    Student(std::string name, std::string id);
    void SetNextStudent(Student *nextStudent);
    std::string GetName();
    std::string GetId();
    void SetName(std::string name);
    void SetId(std::string id);
    Student *GetNextStudent();
};