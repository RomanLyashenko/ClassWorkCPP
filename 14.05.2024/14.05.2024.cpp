#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));
	/* 
	int a;
	int b;
	int sum = 0;
	cin >> a >> b;
	if (a > b) swap(a, b);
	for (int i = a; i < b+1; i++) {
		if (!(i % 2)) {
			cout << i << " ";
		}
		if (i % 5 == 0) {
			sum += i;
		}
	}
	cout << endl;
	cout << sum;
	*/

	/* 
	int size;
	cin >> size;
	for (int i = 0; i < size; i++) cout << "* ";
	cout << endl;
	for (int i = 0; i < size - 2; i++) {
		cout << "* ";
		for (int j = 0; j < size - 2; j++) {
			cout << "  ";
		}
		cout << "* " << endl;
	}
	for (int i = 0; i < size; i++) cout << "* ";
	*/

	/* 
	int const SIZE = 10;
	int array[SIZE]{};
	int a, b;
	int min = array[0];
	int index = 0;
	cin >> a >> b;
	if (a > b)swap(a, b);
	for (int i = 0; i < SIZE; i++) {
		array[i] = a + rand() % b + 1 - a;
		cout << array[i]<<" ";
	}
	cout << endl;
	for (int i = 0; i < SIZE / 2; i++) {
		swap(array[i], array[SIZE - 1 - i]);
	}
	for (int i = 0; i < SIZE; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < SIZE; i++) {
		if (array[index] > array[i]) index = i;	
	}
	cout << index;
	*/

	/* 
	int const SIZE = 5;
	int const SIZE2 = 8;
	int array[SIZE][SIZE2]{};
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE2; j++) {
			array[i][j] = 2 + rand() % 4;
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	*/
	
	/* 
	int sum1 = 0, sum2 = 0, sumALL = 0;
	int array[3][4]{};
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			array[i][j] = 1 + rand() % 9;
			cout << array[i][j] << "\t";
			sum1 += array[i][j];
			sumALL += sum1;
		}
		cout << "| " << sum1<<"\t";
		cout << endl;
		sum1 = 0;
	}
	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 3; i++) {
			sum2 += array[i][j];
			sumALL += sum2;
		}
		cout << sum2 << "\t";
	}
	cout << "| " << sumALL;
	*/
}