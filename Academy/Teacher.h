#pragma once

#include "Person.h"

enum Subject { Graphics, Development };

class Teacher {
public:
	Person personal_info;
	Subject subject;
};