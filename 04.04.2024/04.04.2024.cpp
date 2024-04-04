#include <iostream>
using namespace std;

void showArray(int**& array) {
	int size = _msize(array) / sizeof(array[0]);
	int size2 = _msize(array[0]) / sizeof(array[0][0]);
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size2; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void removeLine(int**& array, int n) {
	int size = _msize(array) / sizeof(array[0]);
	int** buf = new int* [size - 1];
	for (int i = 0; i < n; i++) {
		buf[i] = array[i];
	}
	for (int i = n + 1; i < size; i++) {
		buf[i - 1] = array[i];
	}
	delete[]array[n];
	delete[]array;
	array = buf;
}

void removeColumn(int**& array, int n) {
	int size = _msize(array) / sizeof(array[0]);
	int size2 = _msize(array[0]) / sizeof(array[0][0]);
	int** buf = new int* [size - 1];
	for (int i = 0; i < size; i++) {
		buf[i] = new int[size2 - 1];
		for (int j = 0; j < n; j++) {
			buf[i][j] = array[i][j];
		}
		for (int j = n + 1; j < size2; j++) {
			buf[i][j - 1] = array[i][j];
		}
	}
	for (int i = 0; i < size; i++) {
		delete[]array[i];
	}
	delete[]array;
	array = buf;
}

void appendArrayInLine(int**& array, int* array2, int n) {
	int size = _msize(array) / sizeof(array[0]);
	int size1 = _msize(array2) / sizeof(array2[0]);
	int size2 = _msize(array[0]) / sizeof(array[0][0]);
	int** buf = new int* [size + 1];
	for (int i = 0; i < size1; i++) {
		buf[i] = array[i];
	}
	buf[n] = new int [size2];
	for (int i = 0; i < size; i++) {
		buf[i] = array[i];
	}
	delete[]array;
	array = buf;
}

int main()
{
	srand (time(NULL));
	// task 1 
	int size = 7;
	int size2 = 8;
	int** array = new int* [size];
	for (int i = 0; i < size; i++){
		array[i] = new int[size2] {};
		for (int j = 0; j < size2; j++){
			array[i][j] = 10 + rand() % 90;
		}
	}
	int* array2 = new int [size];
	for (int i = 0; i < size; i++) {
		array2[i] = 10 + rand() % 90;
		cout << array2[i] << " ";
	}
	cout << endl;
	showArray(array);
	removeLine(array, 2);
	showArray(array);
	removeColumn(array, 3);
	showArray(array);
	appendArrayInLine(array, array2, 2);
	showArray(array);
}
