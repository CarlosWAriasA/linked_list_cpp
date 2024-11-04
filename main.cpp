#include "List.h"
#include "Student.h"
#include <memory>

int main()
{
    auto list = std::make_unique<List>();
    auto student1 = std::make_unique<Student>("Carlos", "2022-0021");
    auto student2 = std::make_unique<Student>("Wilmer", "2022-0132");
    auto student3 = std::make_unique<Student>("Elian", "2022-1232");
    auto student4 = std::make_unique<Student>("Melina", "2022-5654");

    list->Add(student1.get());
    list->Add(student2.get());
    list->Add(student3.get());

    list->ListAll(list.get());

    list->Delete(1);
    list->ListAll(list.get());

    list->Modify(1, student4.get());
    list->ListAll(list.get());

    return 0;
}