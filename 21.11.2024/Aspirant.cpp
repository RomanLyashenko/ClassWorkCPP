#include "Aspirant.h"

Aspirant::Aspirant(stringi themeOfTheWork, int examMark, stringi name, stringi lastName, stringi fatherName, stringi faculty, int grade) : Student(name, lastName, fatherName, faculty, grade)
{
	this->themeOfTheWork = themeOfTheWork;
	this->examMark = examMark;
}

stringi Aspirant::getThemeOfTheWork()
{
	return themeOfTheWork;
}

void Aspirant::setThemeOfTheWork(stringi themeOfTheWork)
{
	this->themeOfTheWork = themeOfTheWork;
}

int Aspirant::getExamMark()
{
	return examMark;
}

void Aspirant::setExamMark(int examMark)
{
	this->examMark = examMark;
}

Aspirant::~Aspirant()
{
}
