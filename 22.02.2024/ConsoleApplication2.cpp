# include <iostream>
using namespace std;

int main()
{
	/*
	int c;
	int a = 0;
	cin >> c;
	while (a <= c) {
		cout << a++ << " ";
	}
	*/
	/*
	int min;
	int max;
	int n;
	cout << "input low border of ur range: ";
	cin >> min;
	cout << "input high border of ur range: ";
	cin >> max;
	cout << "input a number: ";
	cin >> n;
	if (min > max) swap(min, max);
	while (min <= max) {
		if (min % n == 0) cout << min << " ";
		min++;
	}
	
	/*
	int min;
	int max;
	int count = 0;
	cout << "first number: ";
	cin >> min;
	cout << "second number: ";
	cin >> max;
	if (min > max) swap(min, max);
	if (min % 2) min++;
	while (min <= max) {
		count += min;
		min += 2;
	}
	cout << count;
	*/
	/*
	int min;
	int max;
	cout << "input low border of ur range: ";
	cin >> min;
	cout << "input high border of ur range: ";
	cin >> max;
	if (min > max) swap(min, max);
	while (max >= min) {
		cout << max << " ";
		max--;
	}
	*/
	/*
	double min, max;
	cout << "input low border of ur range: ";
	cin >> min;
	cout << "input high border of ur range: ";
	cin >> max;
	if (min > max) swap(min, max);
	cout << (max + min) / 2;
	*/
	/*
	double summ = 0;
	int n = 1;
	while (n != 0) {
		cin >> n;
		summ += n;
	}
	cout << summ;
	*/
	/*
	int min, max;
	cout << "input low border of ur range: ";
	cin >> min;
	cout << "input high border of ur range: ";
	cin >> max;
	if (min > max) swap(min, max);
	do {
		cout << min++ << " ";
	} while (min <= max);
	*/
	/*
	int min;
	int max;
	int n;
	cout << "input low border of ur range: ";
	cin >> min;
	cout << "input high border of ur range: ";
	cin >> max;
	if (min > max) swap(min, max);
	cout << "input a number: ";
	cin >> n;
	while (n < min || n > max) {
		cin >> n;
	}
	*/
	int a;
	float disc, check = 0;
	do
	{
		cout << "1. Product 1" << endl; // 100
		cout << "2. Product 2" << endl; // 200
		cout << "3. Product 3" << endl; // 300
		cout << "4. Product 4" << endl; // 400
		cout << "5. Discount(%)" << endl;
		cout << "6. Print check" << endl;
		cout << "choose number: ";
		cin >> a;
		if (a < 1 || a > 6) {
			cout << "ERROR" << endl;
		}
		{
		switch (a) {
		case 1:
			check += 100;
			break;
		case 2:
			check += 200;
			break;
		case 3:
			check += 300;
			break;
		case 4:
			check += 400;
			break;
		case 5:
			cin >> disc;
			check -= (check / 100 * disc);
			break;
		default:
			break;
		}
	}
	} while (a != 6);
	cout << check;
}