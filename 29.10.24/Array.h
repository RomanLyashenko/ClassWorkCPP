#pragma once
#include <iostream>
using namespace std;
class Array
{
private:
	int size;
	int* arr;
public:
	Array();
	Array(int);
	Array(const Array&);
	void fillArr();
	void ptintArr();
	void changeSize(int);
	void sortArr();
	void findMin();
	void findMax();
	~Array();
};

