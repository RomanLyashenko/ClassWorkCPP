#include "Hamster.h"

Hamster::Hamster(float cheekVolume, string nickName, string breed, string type, int age) : Pet(nickName, breed, type, age)
{
	this->cheekVolume = cheekVolume;
	this->nickName = nickName;
	this->breed = breed;
	this->type = type;
	this->age = age;
}

float Hamster::getCheekVolume()
{
	return cheekVolume;
}

void Hamster::setCheekVolume(float cheekVolume)
{
	this->cheekVolume = cheekVolume;
}

Hamster::~Hamster()
{
}
