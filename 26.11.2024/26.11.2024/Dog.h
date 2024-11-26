#pragma once
#include "Pet.h"
#include <iostream>
using namespace std;


class Dog : public Pet
{
private: 
	bool nasalWetness;
public:
	Dog(bool nasalWetness, string nickName, string breed, string type, int age);
	bool getNasalWetness();
	void setNasalWetness(float featherLength);
	void Sound() { cout << "gav, gav, gav" << endl; }
	void Show() { cout << nickName << endl; }
	void showType() { cout << "dog" << endl; }
	~Dog();
};

