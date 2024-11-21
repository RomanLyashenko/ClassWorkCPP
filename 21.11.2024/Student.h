#pragma once
#include <iostream>
#define stringi string
using namespace std;
class Student
{
	friend ostream& operator<<(ostream& out, Student& obj);
protected:
	stringi name;
	stringi lastName;
	stringi fatherName;
	stringi faculty;
	int grade;
public:
	Student(stringi name, stringi lastName, stringi fatherName, stringi faculty, int grade);
	stringi getName();
	void setName(stringi name);
	stringi getLastName();
	void setLastName(stringi lastname);
	stringi getFatherName();
	void setFatherName(stringi fathername);
	stringi getFaculty();
	void setFaculty(stringi faculty);
	int getGrade();
	~Student();
};

