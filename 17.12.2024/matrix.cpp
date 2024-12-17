#include "matrix.h"

int** matrix::memoryAllocation(int row, int col)
{
	int** arr = new int* [row];
	for (int i = 0; i < row; i++) {
		arr[i] = new int[col];
	}
	return arr;
}

void matrix::fillManual(int** arr, int row, int col)
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			std::cout << "enter num";
			std::cin >> arr[i][j];
			if (std::cin.fail()) {
				throw "not a num";
			}
		}
	}
}

void matrix::fillAuto(int** arr, int row, int col, int max = 10, int min = 1)
{
	srand(time(NULL));
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = min + rand() % (max - min);
		}
	}
}

void matrix::print(int** arr, int row, int col)
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void matrix::arrToMatrix(int** arr, int* arr2, int row, int col)
{
	int count = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = arr2[count++];
		}
	}
}

void matrix::matrixToArr(int** arr, int* arr2, int row, int col)
{
	int count = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr2[count++] = arr[i][j];
		}
	}
}

void matrix::sort(int** arr, int row, int col)
{
	int* arr2 = new int[row * col];
	matrixToArr(arr, arr2, row, col);
	for (int i = 0; i < row * col; i++) {
		for (int j = 0; j < (row * col) - 1; j++) {
			if (arr2[j] > arr2[j + 1]) {
				std::swap(arr2[j], arr2[j + 1]);
			}
		}
	}
	arrToMatrix(arr, arr2, row, col);
	delete[] arr2;
}

void matrix::sum(int** arr, int row, int col, int** arr2, int row2, int col2)
{
	if (row != row2 || col != col2) {
		throw "not equal";
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] += arr2[i][j];
		}
	}
}

void matrix::multiply(int** arr, int row, int col, int num)
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] *= num;
		}
	}
}

void matrix::trans(int** arr, int row, int col)
{
	int* arr2 = new int[row * col];
	matrixToArr(arr, arr2, row, col);
	arrToMatrix(arr, arr2, col, row);
	delete[] arr2;
}

