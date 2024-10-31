#pragma once
#include <iostream>
#include <string>
using namespace std;
class Worker
{
private:
	string Name;
	string SecName;
	string DadName;
	string Rang;
	int Year;
	int Salary;
public:
	explicit Worker(const string& Name, const string& SecName, const string& DadName,
	const string& Rang, int Year, int Salary){}
	const string& getName() {
		return Name;
	}
	const string& getSecName() {
		return SecName;
	}
	const string& getDadName() {
		return DadName;
	}
	const string& Rang() {
		return Rang;
	}
	const int Year() {
		return Year;
	}
	const int Salary() {
		return Salary;
	}
	void display() {
		cout << "ФИО: " << Name << " " << SecName << " " << DadName << endl
		<< "Год поступления на работу: " << Year << endl << "Зарплата"
		<< Salary << endl;
	}

};


