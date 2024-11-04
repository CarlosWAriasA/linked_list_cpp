#include "List.h"
#include "Student.h"

int main()
{
    List *list = new List();
    Student *student1 = new Student("Carlos", "2022-0021");
    Student *student2 = new Student("Wilmer", "2022-0132");
    Student *student3 = new Student("Elian", "2022-1232");
    Student *student4 = new Student("Melina", "2022-5654");

    list->Add(student1);
    list->Add(student2);
    list->Add(student3);

    list->ListAll(list);

    list->Delete(1);
    list->ListAll(list);

    list->Modify(1, student4);
    list->ListAll(list);

    delete list;
    return 0;
}