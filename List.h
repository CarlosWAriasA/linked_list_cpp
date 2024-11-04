#pragma once
#include "Student.h"

class List
{
private:
    Student *_first;
    Student *_last;

public:
    List();
    void ListAll(List *list);
    void Add(Student *student);
    void Delete(int index);
    void Modify(int index, Student *student);
    Student *GetFirst();
};