#include "Student.h"

Student::Student(stringi name, stringi lastName, stringi fatherName, stringi faculty, int grade)
{
	this->name = name;
	this->lastName = lastName;
	this->fatherName = fatherName;
	this->faculty = faculty;
	this->grade = grade;
}

stringi Student::getName()
{
	return this->name;
}

void Student::setName(stringi name)
{
	this->name = name;
}

stringi Student::getLastName()
{
	return this->lastName;
}

void Student::setLastName(stringi lastname)
{
	this->lastName = lastname;
}

stringi Student::getFatherName()
{
	return this->fatherName;
}

void Student::setFatherName(stringi fathername)
{
	this->fatherName = fathername;
}

stringi Student::getFaculty()
{
	return this->faculty;
}

void Student::setFaculty(stringi faculty)
{
	this->faculty = faculty;
}

int Student::getGrade()
{
	return this->grade;
}

Student::~Student()
{
}
