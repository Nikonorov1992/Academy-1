#pragma once

#include "Person.h"

enum Faculty { SoftDev, Design };

class Student
{
public:
	Person personal_info;
	double rating;
	Faculty faculty;
};