#pragma once

#include <string>

using namespace std;

enum Sex { Male, Female, Unknown };

class Person {
public:
	string name;
	int age;
	Sex sex;
};
