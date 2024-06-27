#include <iostream>
#include <fstream>
#include <string>
#define random(min, max) min + rand() % max - min
using namespace std;


void showArray(int** array) {
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

void copyArray(int** array1, int** array2) {
	int size1 = _msize(array1) / sizeof(array1[0]);
	int size2 = _msize(array1[0]) / sizeof(array1[0][0]);
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			array2[i][j] = array1[i][j];
		}
	}
}

void addSymbol(int* array, int* buf, int index, int symbol) {
	int size = _msize(array) / sizeof(array[0]);
	for (int i = 0; i < index; i++) {
		buf[i] = array[i];
	}
	buf[index] = symbol;
	for (int i = index+1; i < size; i++) {
		buf[i] = array[i];
	}
	delete[]array;
	array = buf;
}

void showArray2(int* array) {
	int size = _msize(array) / sizeof(array[0]);
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}

void addColumn(int**& array,int* array2, int num) {
	int size1 = _msize(array) / sizeof(array[0]);
	int size2 = _msize(array[0]) / sizeof(array[0][0]);
	int** buf = new int* [size1];
	for (int i = 0; i < size1; i++) {
		buf[i] = new int[size2 + 1];
		for (int j = 0; j < num; j++) {
			buf[i][j] = array[i][j];
		}
	}

	for (int i = 0; i < size1; i++) {
		for (int j = num; j < size2 + 1; j++) {
			buf[i][j] = array[i][j + 1];
		}
	}

	for (int i = 0; i < size1; i++) {
		delete[] array[i];
	}
	delete[] array;

	array = buf;
}

void deleteColumn(int**& array, int index, int num) {
	int size1 = _msize(array) / sizeof(array[0]);
	int size2 = _msize(array[0]) / sizeof(array[0][0]);
	int** buf = new int* [size1];
	for (int i = 0; i < size1; i++) {
		buf[i] = new int[size2 - num];
		for (int j = 0; j < index; j++) {
			buf[i][j] = array[i][j];
		}
	}
	for (int i = 0; i < size1; i++) {
		for (int j = index; j < size2 - num; j++) {
			buf[i][j] = array[i][j + 1];
		}
	}
	for (int i = 0; i < size1; i++) {
		delete[] array[i];
	}

	delete[] array;
	array = buf;
}

int seekWord(string words, string word) {
	int size = 0;
	bool flag = true;
	for (; word[size] != '\0'; size++) {}

	for (int i = 0; words[i] != '\0'; i++) {
		for (int j = 0; word[j] != '\0'; j++) {
			if (words[i + j] != word[j]) {
				break;
			}
			else if (words[i + j] == word[j] && j == size - 1) {
				flag = false;
				return i;
			}
		}
	}
	if (flag) return -1;
}

void countWord(string str) {
	int count = 0;
	int k = 0;
	for(; str[k] != ' ' && str[k] != '\0'; k++);
	for (int i = k; str[i] != '\0'; i++) {
		if (str[i] != ' ' && str[i + 1] == '\0') count++;
		if (str[i] == ' ' && str[i + 1] != '\0') count++;
	}
	return count;
}

void countWordsInFile(string path) {
	string buf;
	int count = 0;
	ifstream in(path);
	if (in.is_open()) {
		while (getline(in, buf)) {
			count += countWord(buf);
		}
	}
	in.close();
	return count;
}

int findMin(int** array) {
	int min = 0;
	int size1 = _msize(array) / sizeof(array[0]);
	int size2 = _msize(array[0]) / sizeof(array[0][0]);
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++){
			if (array[i][j] > array[i][j + 1]) min = array[i][j + 1];
		}
	}
}
int main(){
	srand(time(NULL));
	// task  1

	/*int num1, num2, num3, num4;
	cin >> num1;
	cin >> num2;
	cin >> num3;
	cin >> num4;
	if (num1 < num2 && num1 < num3 && num1 < num4) cout << "min number: " << num1;
	if (num2 < num1 && num2 < num3 && num2 < num4) cout << "min number: " << num2;
	if (num3 < num2 && num3 < num1 && num3 < num4) cout << "min number: " << num3;
	if (num4 < num2 && num4 < num3 && num4 < num1) cout << "min number: " << num4;*/

	// task 2

	/*for (int i = 0; i >= -25; i -= 3) {
		cout << i << " ";
	}*/

	// task 3

	/*int size;
	cin >> size;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = i; j < size; j++) {
			cout << "* ";
		}
		cout << endl;
	}*/

	// task 4

	/*int a;
	int sum = 0;
	cin >> a;
	int count = 0;
	while (a != 0) {
		sum += a;
		cin >> a;
		count++;
	}
	float avagre = sum / count;
	cout << "avarge: " << avagre;*/

	// task 5;

	/*int low;
	cin >> low;
	int high;
	cin >> high;
	if (low > high) swap(low, high);
	int array[10];
	for (int i = 0; i < 10; i++) {
		array[i] = random(low, high);
		cout << array[i] << " ";
	}*/

	// task 6
	/*int size = 5;
	int** array = new int* [size];
	for (int i = 0; i < size; i++) {
		array[i] = new int[size];
		for (int j = 0; j < size; j++) {
			array[i][j] = random(0, 10);
		}
	}
	showArray(array);
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {

		}
	}*/

	// task 7

	/*int size = 5;
	int** array1 = new int* [size];
	for (int i = 0; i < size; i++) {
		array1[i] = new int[size];
		for (int j = 0; j < size; j++) {
			array1[i][j] = random(0, 10);
		}
	}
	int** array2 = new int* [size];
	for (int i = 0; i < size; i++) {
		array2[i] = new int[size];
	}
	showArray(array1);
	copyArray(array1, array2);
	showArray(array2);*/

	// task 8

	/*int size = 10;
	int* array = new int[size];
	for (int i = 0; i < size; i++) {
		array[i] = 1;
	}
	int* buf = new int[size + 1];
	showArray2(array);
	addSymbol(array, buf, 3, 0);
	showArray2(buf);*/

	// task 9

	/*int size = 5;
	int** array = new int* [size];
	for (int i = 0; i < size; i++) {
		array[i] = new int[size];
		for (int j = 0; j < size; j++) {
			array[i][j] = random(0, 10);
		}
	}
	int* array2 = new int[size];*/

	// task 10
	//int size = 5;
	//int** array = new int* [size];
	//for (int i = 0; i < size; i++) {
	//	array[i] = new int[size];
	//	for (int j = 0; j < size; j++) {
	//		array[i][j] = random(0, 10);
	//	}
	//}
	//showArray(array);
	//deleteColumn(array, 3, 2);
	//showArray(array);

	// task 12

	/*string words = "Love history histo";
	string word = "8";
	cout << seekWord(words, word);*/

	// task 13
	
	/*string path;
	ofstream out(path);
	out.open("File.txt");
	if (out.is_open()) {
		path = "Bim bim bam Bam";
		out << path;
	}
	cout << countWordsInFile(path);*/

	//task 11
	
	int size = 5;
	int** array = new int* [size];
	for (int i = 0; i < size; i++) {
		array[i] = new int[size];
		for (int j = 0; j < size; j++) {
			array[i][j] = random(0, 10);
		}
	}

}
