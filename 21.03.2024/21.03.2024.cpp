#include <iostream>
using namespace std;

void showLine(int n) {
	cout << "////////////////////" << endl;
	cout << "--------------------" << endl;
	cout << "--------task"<< n <<"-------" << endl;
	cout << "--------------------" << endl;
	cout << "////////////////////" << endl;
}
void numbs(int n) {
	if (n < 0) {
		for (int i = 0; i > n - 1; i--) {
			cout << i << " ";
		}
	}
	else {
		for (int i = 0; i < n + 1; i++) {
			cout << i << " ";
		}
	}
	
}
void showRectangle(int n, int k) {
	for (int i = 0; i < k; i++) {
		for (int i = 0; i < n; i++) {
			cout << "* ";
		}
		cout << endl;
	}
}
int showFactorial(int n) {
	int fac = 1;
	for (int i = 1; i < n+ 1; i++) {
		fac *= i;
	}
	return fac;
}
bool simpleNumber(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}
void maxNumber(int num1, int num2, int num3, int num4, int num5) {
	if (num1 < num2) num1 = num2;
	if (num1 < num3) num1 = num3;
	if (num1 < num4) num1 = num4;
	if (num1 < num5) num1 = num5;
	cout <<"max number: " << num1;
}
int maxNumber(int num1, int num2) {
	return ((num1 > num2) ? num1 : num2);
}
int thirdDegree(int n) {
	return n * n * n;
}
bool negative(int n) {
	return n > 0;
}
void mySwap(int& a, int& b) {
	a = a + b;
	b = a - b;
	a = a - b;
}
void mySwap(float& a, float& b) {
	a = a + b;
	b = a - b;
	a = a - b;
}
void mySwap(char& a, char& b) {
	a = a + b;
	b = a - b;
	a = a - b;
}

int main()
{
	/* 
	int num;   
	showLine(1);
	cout << "Task1" << endl;
	cout << "Input a number: "; cin >> num;
	cout << "Your number: " << num << endl;
	showLine(2);
	cout << "Task2" << endl;
	for (int i = 0; i < 10; i++) {
		cout << "5 ";
	}
	cout << endl;
	showLine(3);
	cout << "Task3" << endl;
	for (int i = 0; i < 10; i++) {
		cout << i <<" ";
	}
	*/
	//numbs(10);
	
	// task1
	//showRectangle(9,5);

	//task2
	//cout << showFactorial(5);
	 
	//task3
	//cout << simpleNumber(5);

	//task4
	//cout << thirdDegree(5);

	//task5
	//cout << negative(-1);
	
	//swap
	/* 
	float a = 2.8;
	float b = 3.9;
	mySwap(a, b);
	cout << a << " " << b;
    */
	int n = 7;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j || i == n - 1 - j) cout << "* ";
			else cout << "  ";
		}	
		cout << endl;
	}

}

