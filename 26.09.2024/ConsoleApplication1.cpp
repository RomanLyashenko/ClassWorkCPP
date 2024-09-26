#include <iostream>
#include <string>
using namespace std;


struct Date
{
	int day;
	int month;
	int year;
};

struct Student
{
	string surname;
	string name;
	int group_number;
	Date birthday;
};

void print_date(Date& date)
{
	cout << date.day << '.' <<
		date.month << '.' << date.year << endl;
}

void print_student(Student& student)
{
	cout << "Surname: " << student.surname << endl;
	cout << "Name: " << student.name <<  endl;
	cout << "Group: " << student.group_number << endl;
	print_date(student.birthday);
}

int main()
{
	Student students[10];

	Student student{ "Alex", "John", 2 };
	student.birthday.day = 20;
	student.birthday.month = 9;
	student.birthday.year = 2024;
	print_student(student);

	return 0;
}