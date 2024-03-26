#include <iostream>
using namespace std;

void showArray(int array[], int size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}

int showMin(int array[], int size) {
	int min = array[0];
	for (int i = array[0]; i < size; i++) {
		if (i > array[i]) i = array[i];
	}
	return min;
}

int showMinIndex(int array[], int size) {
	int min = array[0];
	int index = 0;
	for (int i = 1; i < size; i++) {
		if (min > array[i]) {
			min = array[i];
			index = i;
		}
	}
	return index;
}

void copyArray(int array1[], int array2[], int size) {
	for (int i = 0; i < size; i++) {
			array2[size - 1 - i] = array2[i];
	}
}

int arrayAvg(int array[], int size, float count) {
	for (int i = 0; i < size; i++) {
		count += array[i];
	}
	return count / size;
}

void fillArray(int array[], int size, int min = 0, int max = 9) {
	for (int i = 0; i < size; i++) {
		array[i] = min + rand() % (max + 1 - min);
	}
}

void copyArray(int array1[], int size1, int array2[], int size2) {
	if (size1 > size2) {
		for (int i = 0; i < size2; i++) {
			array2[i] = array1[i];
		}
		for (int i = size1; i < size2; i++) {
			array2[i] = 0;
		}
	}
}

void changeArray(int array1[], int size1, int array2[], int size2){
	for (int i = 0; i < size2; i++) {
		for (int j = 0; j < size1; j++) {
			if (array2[i] == array1[j]) {
				array2[i] = 0;
				break;
			}
		}
	}
}

int main()
{
	srand(time(NULL));
	/* 
	int array[] = { 3,2,4,23,5,2 };
	int size = sizeof(array) / sizeof(array[0]);
	showArray(array, size);
	
	showMin(array, size);
	cout << showMin(array, size);
	*/
	/* 
	const int size = 6;
	int array1[size] = { 3,2,4,23,5,2 };
	int array2[size] = {};
	copyArray(array1, array2, size);

	int array[size];
	arrayAvg(array, size, count);
	*/
	
	//int array1[10];
	//int array2[15];
	//int array3[5];
	//fillArray(array1, 10);
	////fillArray(array2, 15);
	//fillArray(array3, 5);
	//showArray(array1, 10);
	///*
	//showArray(array2, 15);
	//showArray(array3, 5);
	//copyArray(array1, 10, array2, 15);
	//showArray(array2, 15);
	//copyArray(array1, 10, array3, 5);
	//*/
	//showArray(array3, 5);
	//changeArray(array1, 10, array3, 5);
	//showArray(array3, 5);

	int x, y;
	cin >> x;
	cin >> y;
    char field[8][8];
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i % 2 == j % 2) {
				field[i][j] = 219;
			}
			else field[i][j] = ' ';
		}
	}


	for (int i = x - 1, j = y - 1; i >= 0; i--, j--) {
		field[i][j] = '*';
	}
	
	for (int i = x + 1, j = y + 1; i >= 0; i++, j++) {
		field[i][j] = '*';
	}

	for (int i = x - 1, j = y + 1; i >= 0; i--, j++) {
		field[i][j] = '*';
	}
	for (int i = x + 1, j = y - 1; i >= 0; i++, j--) {
		field[i][j] = '*';
	}

	field[x][y] = '@';
	cout << "   a b c d e f g h" << endl;
	for (int i = 0; i < 8; i++) {
		cout << i + 1 << " ";
		for (int j = 0; j < 8; j++) {
			cout << field[i][j] << field[i][j];
		}
		cout << endl;
	}

}