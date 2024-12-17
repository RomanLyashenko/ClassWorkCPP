#pragma once
#include <iostream>
namespace matrix {
	int** memoryAllocation(int row, int col);
	void fillManual(int** arr, int row, int col);
	void fillAuto(int** arr, int row, int col, int min, int max);
	void print(int** arr, int row, int col);
	void matrixToArr(int** arr,int* arr2 ,int row, int col);
	void arrToMatrix(int** arr, int* arr2, int row, int col);
	void sort(int** arr, int row, int col);
	void sum(int** arr1, int row1, int col1, int** arr2, int row2, int col2);
	void multiply(int** arr, int row, int col, int num);
	void trans(int** arr, int row, int col);
}