#include <iostream>
using namespace std;

void feelArray(int**& array) {
	int size1 = _msize(array) / sizeof(array[0]);
	int size2 = _msize(array[0]) / sizeof(array[0][0]);
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			array[i][j] = 1 + rand() % 9;
		}
	}
}

void showArray(int**& array) {
	int size1 = _msize(array) / sizeof(array[0]);
	int size2 = _msize(array[0]) / sizeof(array[0][0]);
	for (int i = 0; i < size1; i++) {
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

void extendArray(int**& array, int** array2) {
	int arrSize1 = _msize(array) / sizeof(array[0]);
	int arrSize2 = _msize(array[0]) / sizeof(array[0][0]);
	int arr2Size1 = _msize(array2) / sizeof(array2[0]);

	int** buf = new int* [arrSize1 + arr2Size1];
	for (int i = 0; i < arrSize1; i++)
	{
		buf[i] = array[i];
	}
	for (int i = arrSize1; i < arrSize1 + arr2Size1; i++)
	{
		buf[i] = new int[arrSize2];
	}
	for (int i = arrSize1; i < arrSize1 + arr2Size1; i++)
	{
		for (int j = 0; j < arrSize2; j++)
		{
			buf[i][j] = array2[i - arrSize1][j];
		}
	}

	delete[] array;
	array = buf;
}

int main()
{
	srand(time(NULL));
	int size1 = 4;
	int size2 = 3;
	int size3 = 2;
	int** array = new int* [size1];
	int** array2 = new int* [size3];
	for (int i = 0; i < size3; i++)
	{
		array2[i] = new int[size2];
	}
	for (int i = 0; i < size1; i++)
	{
		array[i] = new int[size2];
	}
	feelArray(array);
	feelArray(array2);
	
	showArray(array);
	showArray(array2);
	extendArray(array,array2);
	showArray(array);
}


