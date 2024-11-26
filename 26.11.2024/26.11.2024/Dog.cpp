#include "Dog.h"

Dog::Dog(bool nasalWetness, string nickName, string breed, string type, int age) : Pet(nickName, breed, type, age)
{
	this->nasalWetness = nasalWetness;
	this->nickName = nickName;
	this->breed = breed;
	this->type = type;
	this->age = age;
}

bool Dog::getNasalWetness()
{
	return nasalWetness;
}

void Dog::setNasalWetness(float nasalWetness)
{
	this->nasalWetness = nasalWetness;
}

Dog::~Dog()
{
}
