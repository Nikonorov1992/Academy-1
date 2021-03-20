#pragma once

#include <vector>

#include "show.h"

using namespace std;

void ShowStudents(vector<Student> students)
{
    for (auto student : students) {
        ShowStudent(student);
    }
}

void ShowTeachers(vector<Teacher> teachers)
{
    //TODO Написать реализацию по выводу информации о преподавателях
}


//TODO Написать реализацию по выводу информации о менеджерах
