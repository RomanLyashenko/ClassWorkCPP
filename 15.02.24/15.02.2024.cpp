#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	/*
	расчитывает расстояние между 2-мя населенными пунктами
	double size, dist1, rez;
	cout << "input size(km/sm): " << endl;
	cin >> size;
	cout << "input distant on a map(sm): " << endl;
	cin >> dist1;
	rez = size * dist1;
	cout << "distant: " << rez;
	*/
	/*
	вычисление объема параллелипипида
	int a, b, c;
	cout << "вычисление объема параллелипипида" << endl;
	cout << "введите исходные данные: " << endl;
	cout << "input длина: ";
	cin >> a;
	cout << "input ширина: ";
	cin >> b;
	cout << "input высота: ";
	cin >> c;
	cout << "Длина = " << a << endl;
	cout << "Ширина = " << b << endl;
	cout << "Высота = " << c << endl;
	cout << "Обьем: " << a * b * c;
	*/
	// вычисляет какое число больше
	/*
	int a, b;
	cin >> a;
	cin >> b;
	cout << ((a > b) ? a : b) << endl;
	if (a > b) {
		cout << a;
	}
	else if (b > a) {
		cout << b;
	}
	else cout << "они равны";
	*/
	// вычисляет число положительное или отрицательное
	/* 
	int a;
	cin >> a;
	if (a < 0) {
		cout << "число отрицательное";
	}
	else if (a > 0) {
		cout << "число положительное";
	}
	else cout << "число равно 0";
	*/
	// вычисляет наибольшее число
	/* 
	int a, b;
	cin >> a;
	cin >> b;
	if (a > b) {
		cout << b << " " << a;
	}
	else if (b > a) {
		cout << a << " " << b;
	}
	else cout << "они равны";
	*/
	// если средний балл студента меньше 4, то студент не допущен к экзамену
	/* 
	int mark1, mark2, mark3, mark4, mark5;
	cout << "введите оценки студенка: ";
	cin >> mark1;
	cin >> mark2;
	cin >> mark3;
	cin >> mark4;
	cin >> mark5;
	if ((mark1 + mark2 + mark3 + mark4 + mark5)/5 >= 4) {
		cout << "студент допущен к экзамену";
	}
	else cout << "студент НЕ допущен к экзамену";
	*/
	// если число четное, то его надо поделить на 2, если оно не четное, то его надо умножить на 3
	/* 
	int a;
	cin >> a;
	cout << ((a % 2) ? a / 2.0 : a * 3);
	*/
	// калькулятор
	/*
	double a, b;
	cout << "введите 1ое число: ";
	cin >> a;
	cout << "введите арифметическое действие(+;-;*;/): ";
	char act;
	cin >> act;
	cout << "введите 2ое число: ";
	cin >> b;
	if (act ==  '+') {
		cout << "ответ: " << a + b;
	}
	else if (act == '-') {
		cout << "ответ: " << a - b;
	}
	else if (act == '*') {
		cout << "ответ: " << a * b;
	}
	else if (act == '/' and b == 0) {
		cout << "error";
	}
	else cout << "ответ: " << a / b;
	*/
}