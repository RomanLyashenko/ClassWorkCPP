#include "Pet.h"

Pet::Pet(string nickName, string breed, string type, int age)
{
    this->nickName = nickName;
    this->breed = breed;
    this->type = type;
    this->age = age;
}

string Pet::getNickName()
{
    return nickName;
}

void Pet::setNickName(string nickName)
{
    this->nickName = nickName;
}

string Pet::getBreed()
{
    return breed;
}

void Pet::setBreed(string breed)
{
    this->breed = breed;
}

string Pet::getType()
{
    return type;
}

void Pet::setType(string type)
{
    this->type = type;
}

int Pet::getAge()
{
    return age;
}

void Pet::setAge(int age)
{
    this->age = age;
}

Pet::~Pet()
{
}
