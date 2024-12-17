#include <iostream>
#include "matrix.h"

int main()
{
	int row = 3;
	int col = 3;
	int** test = matrix::memoryAllocation(row,col);
	try{
		matrix::fillManual(test, row, col);
	}
	catch (const char* ex) {
		std::cout << "cin fail" << std::endl;
	}
	matrix::fillAuto(test, row, col, 0, 10);
	matrix::print(test, row, col);
	matrix::sort(test, row, col);
	matrix::print(test, row, col);
	try {
		matrix::sum(test, row, col, test, row, col);
	}catch(const char* ex) {
		 std::cout << "summ fail" << std::endl;
	}
	matrix::multiply(test, row, col, 2);
	matrix::print(test, row, col);
	matrix::trans(test, row, col);
	matrix::print(test, row, col);
}
