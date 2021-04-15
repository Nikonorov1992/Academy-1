#pragma once

#include "Person.h"

enum Subject { Graphics, Development };

string SubjectToString(Subject subject)
{
    switch (subject) {
    case Graphics:
        return "Веб-дизайн";
    case Development:
        return "Разработка ПО";
    }
}

class Teacher {
public:
	Person personal_info;
	Subject subject;
};