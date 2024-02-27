#include <iostream>
using namespace std;

int main()
{
	/* 
	int num, count = 1;
	do {
		cout << "input a number: ";
		cin >> num;
		if (num < 0) {
			cout << "ERROR\nwrong number\n";
		}
	} while (num < 0);
	while (num >= 1) {
		count *= num--;
	}
	cout << "factorial: " << count;
	*/
	/* 
	int min, max;
	cout << "input 1st range border: ";
	cin >> min;
	cout << "input 2nd range border: ";
	cin >> max;
	if (min > max) swap(min, max);
	for (int count = min; count <= max; count++)
	cout << "\nthis are numbers from range between: " << min << " " << "and " << max;
	*/
	/* 
	int n;
	string str;
	cout << "input word: ";
	cin >> str;
	cout << "how many times this word must be repeated: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << str <<endl;
	}
	*/
	/* 
	for (int i = 0; i <= 101; i+=2) {
           cout << i << "; ";	
	}
	*/
	/* 
	for (int i = 14; i <= 54; i+=9) {
		cout << i << "; ";
	}
	*/
	/* 
	int n = 123, k = 0;
	for (int a = n; a != 0; a /= 10) {
		k *= 10;
		k += a % 10;
	}
	cout << k;
	*/
	/* 
	int min, max;
	cout << "input 1st number: ";
	cin >> min;
	cout << "input 2nd number: ";
	cin >> max;
	if (min > max) swap(min, max);
	cout << float(min + max) / 2;
	*/
	/* 
	char s = '*';
	int row, column;
	cout << "input row: ";
	cin >> row;
	cout << "input column: ";
	cin >> column;
	for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
		     cout << s << " ";
	    }
		cout << endl;
	}
	*/
	/* 
	char s = '*';
	int row, column;
	cout << "input row: ";
	cin >> row;
	cout << "input column: ";
	cin >> column;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			if (i == 0 || i == row - 1 || j == 0 || j == column - 1) cout << s << " ";
			else cout << "  ";
		}
		cout << endl;
	}
	*/
	/* 
	int n;
	cout << "input number: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
	*/
    /* 
    int n;
    cout << "input number: ";
    cin >> n;
    for (int i = 0; i <= n; i++) {
	    for (int j = 0; j < i; j++) {
		    cout << "* ";
	    }
	    cout << endl;
    }
	*/
    /* 
    int n;
    cout << "input number: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
	   for (int j = 0; j < i; j++) {
	     	cout << "  ";
	   }
	   for (int j = 0; j < n - i; j++) {
		   cout << "* ";
	   }
	   cout << endl;
    }
	*/
}
