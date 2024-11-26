#pragma once
#include "Pet.h"
#include <iostream>
using namespace std;


class Parrot : public Pet
{
private:
	float featherLength;
public:
	Parrot(float featherLength, string nickName, string breed, string type, int age);
	float getFeatherLength();
	void setFeatherLength(float featherLength);
	void Sound() { cout << "kukareku, kukareku, kukareku" << endl; }
	void Show() { cout << nickName << endl; }
	void showType() { cout << "parrot" << endl; }
	~Parrot();
};

