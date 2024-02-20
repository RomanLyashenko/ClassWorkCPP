#include <iostream>
using namespace std;

int main()
{
	/* 
	int num;
	cin >> num;
	switch (num) {
	case 1:
	case 2:
	case 12:
		cout << "winter";
		break;
	case 3:
		cout << "spring";
		break;
	case 4:
	case 5:
	case 6:
		cout << "summer";
		break;
	case 7:
	case 8:
	case 9:
		cout << "autumn";
		break;
	case 10:
	case 11:
	default:
		cout << "wrong month";
	}
	*/
	/*
	double a;
	double b;
	char  c;
	cin >> a;
	cin >> b;
	cin >> c;
	switch (c) {
	case '+':
		cout << a << "+" << b << "=" << a + b;
		break;
	case '-':
		cout << a << "-" << b << "=" << a - b;
		break;
	case '*':
		cout << a << "*" << b << "=" << a * b;
		break;
	case '/':
		if (c == '/' && b == 0)
			cout << "ERROR";
		    break;
		cout << a << "/" << b << "=" << a / b;
		break;    
	default: 
		cout << "wrong char";
	}
	*/
	/* 
	int a;
	cout << "input a number: ";
	cin >> a;
	cout << ((a % 2) ? "odd" : "even") << endl;
	cout << ((a >= 10 && a <= 20) ? "the number ONLY in range from 10 to 20" : "not in range from 10 to 20") << endl;
	int lowborder1, highborder1;
	cout << "input low border of UR 1st range: ";
	cin >> lowborder1;
	cout << "input high border of UR 1st range: ";
	cin >> highborder1;
	if (lowborder1 > highborder1) swap(lowborder1, highborder1);
	int lowborder2, highborder2;
	cout << "input low border of UR 2st range: ";
	cin >> lowborder2;
	cout << "input high border of UR 2st range: ";
	cin >> highborder2;
	if (lowborder2 > highborder2) swap(lowborder2, highborder2);
	if (a <= highborder1 && a >= lowborder1 && a <= highborder2 && a >= lowborder2) {
		cout << "the number refers to both ranges" << endl;
		return 0;
	}
	if (a <= highborder2 && a >= lowborder2) {
		cout << "the number ONLY in range from " << lowborder2 << " to " << highborder2 << endl;
		return 0;
	}
	if (a <= highborder1 && a >= lowborder1) {
		cout << "the number ONLY in range from " << lowborder1 << " to " << highborder1 << endl;
		return 0;
	}
	else
		cout << "the number DON'T refers to any ranges";
	*/
	/* 
	double maxProfit = 0;
	string season;
	string month;
	double profit;

	for (int i = 1; i <= 12; i++) {
		cout << "input profit fot " << i << " month: ";
		cin >> profit;
    if (profit > maxProfit) {
		maxProfit = profit;
	switch (i) {
	case 1:
		month = "January";
		season = "Winter";
		break;
	case 2:
		month = "February";
		season = "Winter";
		break;
	case 3:
		month = "March";
		season = "Spring";
		break;
	case 4:
		month = "April";
		season = "Spring";
		break;
	case 5:
		month = "May";
		season = "Spring";
		break;
	case 6:
		month = "June";
		season = "Summer";
		break;
	case 7:
		month = "July";
		season = "Summer";
		break;
	case 8:
		month = "August";
		season = "Summer";
		break;
	case 9:
		month = "September";
		season = "Autumn";
		break;
	case 10:
		month = "October";
		season = "Autumn";
		break;
	case 11:
		month = "November";
		season = "Autumn";
		break;
	case 12:
		month = "December";
		season = "winter";
		break;
	}
	}
	}
	cout << "Max profit: " << maxProfit << " was " << month << " season " << season << endl;
	return 0;
	*/
}

