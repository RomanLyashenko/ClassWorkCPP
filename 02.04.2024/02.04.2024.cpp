#include <iostream>
using namespace std;

void showArray(int* array) {
	int size = _msize(array) / sizeof(array[0]);
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}

void append(int*& array, int n) {
	int size = _msize(array) / sizeof(array[0]);
	int* buf = new int[size + 1];
	for (int i = 0; i < size; i++) {
		buf[i] = array[i];
	}
	buf[size] = n;
	delete[] array;
	array = buf;
}

void remove(int*& array) {
	int size = _msize(array) / sizeof(array[0]);
	int* buf = new int[size - 1];
	for (int i = 0; i < size - 1; i++) {
		buf[i] = array[i];
	}
	delete[] array;
	array = buf;
}

void appendI(int*& array, int index, int n){
	int size = _msize(array) / sizeof(array[0]);
	int* buf = new int[size + 1];
	for (int i = 0; i < index; i++) {
		buf[i] = array[i];
	}
	buf[index] = n;
	for (int i = index; i < size; i++) {
		buf[i+1] = array[i];
	}
	delete[] array;
	array = buf;
}

void removeI(int*& array, int index) {
	int size = _msize(array) / sizeof(array[0]);
	int* buf = new int[size - 1];
	for (int i = 0; i < index; i++) {
		buf[i] = array[i];
	}
	for (int i = index + 1; i < size; i++) {
		buf[i-1] = array[i];
	}
	delete[] array;
	array = buf;
}

void appendArray(int*& array1, int*& array2, int index) {
	int size1 = _msize(array1) / sizeof(array1[0]);
	int size2 = _msize(array2) / sizeof(array2[0]);
	int* buf = new int[size1 + size2];
	for (int i = 0; i < index; i++) {
		buf[i] = array1[i];
	}
	for (int i = 0; i < size2; i++) {
		buf[i+index] = array2[i];
	}
	for (int i = index; i < size1; i++) {
		buf[i + size2] = array1[i]; 
	}
	delete[] array1;
	array1 = buf;
}

void removeArray(int*& array1, int*& array2, int index) {
	int counter = 0;
	int size1 = _msize(array1) / sizeof(array1[0]);
	int size2 = _msize(array2) / sizeof(array2[0]);
	for (int i = 0; i < size2; i++) {
		for (int j = 0; j < size1; j++) {
			if (array2[i] = array1[i][j]) counter++;
		}
	}
	int size3 = size1 - size2;


}

int main()
{
	int* array = new int[5]{1,2,3,4,5};
	int* array1 = new int[5]{ 1,2,3,4,5 };
	int* array2 = new int[3]{ 3,9,1 };
	/* 
	append(array, 5);
	showArray(array);
	remove(array);
	showArray(array);
	*/
	/* 
	showArray(array);
	appendI(array, 2, 0);
	showArray(array);
	removeI(array, 3);
	showArray(array);
	*/
	showArray(array1);
	showArray(array2);
	appendArray(array1, array2, 2);
	showArray(array1);
}
