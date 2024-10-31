#include "Array.h"

Array::Array()
{
	this->arr = new int[10];
	this->size = 10;
}

Array::Array(int size)
{
	this->arr = new int[size];
	this->size = size;
}

Array::Array(const Array& arr2)
{
	this->arr = new int[arr2.size];
	for (int i = 0; i < arr2.size; i++) {
		this->arr[i] = arr2.arr[i];
	}
	this->size = arr2.size;
}

void Array::fillArr()
{
	for (int i = 0; i < this->size; i++) {
		cout << "enter num " << i << ": ";
		cin >> this->arr[i];
	}
}

void Array::ptintArr()
{
	for (int i = 0; i < this->size; i++) {
		cout << this->arr[i] << " ";
	}
}

void Array::changeSize(int size)
{
	this->size = size;
}

void Array::sortArr()
{
	for (int i = 0; i < this->size; i++) {
		for (int j = 0; j < (this->size - 1); j++) {
			if (this->arr[j] > this->arr[j + 1]) {
				swap(this->arr[j], this->arr[j + 1]);
			}
		}
	}
}

void Array::findMin()
{
	int min = this->arr[0];
	for (int i = 0; i < this->size; i++) {
		if (min > this->arr[i]) {
			min = this->arr[i];
		}
	}
	cout << "min: " << min;
}

void Array::findMax()
{
	int max = this->arr[0];
	for (int i = 0; i < this->size; i++) {
		if (max < this->arr[i]) {
			max = this->arr[i];
		}
	}
	cout << "max: " << max;
}

Array::~Array()
{
	delete[] this->arr;
}
