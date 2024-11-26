#pragma once
#include "Pet.h"
#include <iostream>
using namespace std;

class Hamster : public Pet
{
private: 
	float cheekVolume;
public:
	Hamster(float cheekVolume, string nickName, string breed, string type, int age);
	float getCheekVolume();
	void setCheekVolume(float cheekVolume);
	void Sound(){ cout << "tap, tap, tap" << endl; }
	void Show(){ cout << nickName << endl; }
	void showType() { cout << "cat" << endl; }
	~Hamster();
};

