#include <iostream>
#define stringi string
using namespace std;
#include "Student.h"
#include "Aspirant.h"

ostream& operator<<(ostream& out, Student& obj) {
    return out << obj.name << " " << obj.lastName << " " << obj.fatherName << " " << obj.faculty << " " << obj.grade;
}

ostream& operator<<(ostream& out, Aspirant& obj) {
    return out << obj.name << " " << obj.lastName << " " << obj.fatherName << " " << obj.faculty << " " << obj.themeOfTheWork << " " << obj.examMark;
}

int main()
{
    Student roman("Student1", "Surname", "FatherName", "DS", 3);
    Aspirant roman142("Work", 5, "Student1", "Surname", "FatherName", "DS", 12);
    cout << roman;
    cout << endl;
    cout << roman142;
}
