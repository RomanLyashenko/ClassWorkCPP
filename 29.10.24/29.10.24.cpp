#include <iostream>
#include "String.h"
#include "Array.h"
using namespace std;
int main()
{
	/*String obj1(5);
	obj1.setStr();
	cout << obj1.getStr();*/

	Array obj1;
	obj1.fillArr();
	obj1.ptintArr();
	cout << endl;
	obj1.sortArr();
	obj1.ptintArr();
	cout << endl;
	obj1.findMin();
	cout << endl;
	obj1.findMax();
}
