#include "List.h"
#include "Student.h"
#include <iostream>

List::List() : _first(NULL), _last(NULL) {}

Student *List::GetFirst()
{
    return _first;
}

void List::ListAll(List *list)
{
    std::cout << std::endl;
    int i = 1;
    Student *e = list->GetFirst();
    while (e != NULL)
    {
        std::cout << " " << e->GetName() << " " << e->GetId() << std::endl;
        e = e->GetNextStudent();
        i++;
    }
    if (i == 1)
    {
        std::cout << std::endl
                  << "List is Empty" << std::endl;
    }
    std::cout << std::endl;
}

void List::Add(Student *student)
{
    if (_first == nullptr)
    {
        _first = student;
        _last = student;
    }
    else
    {
        _last->SetNextStudent(student);
        _last = student;
    }
}

void List::Delete(int index)
{
    if (_first == NULL)
    {
        return;
    }

    Student *previous = NULL;
    Student *current = _first;
    int i = 0;

    while (current != NULL && i != index)
    {
        previous = current;
        current = current->GetNextStudent();
        i++;
    }

    if (current == NULL)
    {
        return;
    }

    if (i == 0)
    {
        _first = current->GetNextStudent();
        delete current;
    }
    else
    {
        previous->SetNextStudent(current->GetNextStudent());
        delete current;
    }
}

void List::Modify(int index, Student *student)
{
    if (index < 0)
    {
        std::cout << "index should be greater than zero" << std::endl;
        return;
    }

    Student *current = _first;
    int currentIndex = 0;

    while (current != nullptr && currentIndex < index)
    {
        current = current->GetNextStudent();
        currentIndex++;
    }

    if (current != nullptr)
    {
        current->SetName(student->GetName());
        current->SetId(student->GetId());
    }
    else
    {
        std::cout << "Index out of range.\n";
    }
}