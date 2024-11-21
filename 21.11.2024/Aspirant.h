#pragma once
#include <iostream>
#define stringi string
using namespace std;
#include "Student.h"
class Aspirant: public Student
{
	friend ostream& operator<<(ostream& out, Aspirant& obj);
protected:
	string themeOfTheWork;
	int examMark;
public:
	Aspirant(stringi  themeOfTheWork, int examMark, stringi name, stringi lastName, stringi fatherName, stringi faculty, int grade);
	stringi getThemeOfTheWork();
	void setThemeOfTheWork(stringi themeOfTheWork);
	int getExamMark();
	void setExamMark(int examMmark);
	~Aspirant();
};

