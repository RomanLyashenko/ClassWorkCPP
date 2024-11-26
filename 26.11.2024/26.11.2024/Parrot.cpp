#include "Parrot.h"

Parrot::Parrot(float featherLength, string nickName, string breed, string type, int age) : Pet(nickName, breed, type, age)
{
	this->featherLength = featherLength;
	this->nickName = nickName;
	this->breed = breed;
	this->type = type;
	this->age = age;
}

float Parrot::getFeatherLength()
{
	return featherLength;
}

void Parrot::setFeatherLength(float featherLength)
{
	this->featherLength = featherLength;
}

Parrot::~Parrot()
{
}
