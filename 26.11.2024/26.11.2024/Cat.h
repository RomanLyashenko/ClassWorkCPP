#pragma once
#include "Pet.h"
#include <iostream>
using namespace std;

class Cat : public Pet
{
private:
	float mustacheLength;
public:
	Cat(float mustacheLength, string nickName, string breed, string type, int age);
	float getMustacheLength();
	void setMustacheLength(float mustacheLength);

	void Sound() { cout << "meow, meow, meow" << endl; }
	void Show() { cout << nickName << endl; }
	void showType() { cout << "cat" << endl; };

	~Cat();
};

