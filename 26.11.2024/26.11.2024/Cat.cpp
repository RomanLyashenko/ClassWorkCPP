#include "Cat.h"

Cat::Cat(float mustacheLength, string nickName, string breed, string type, int age) : Pet(nickName, breed, type, age)
{
    this -> mustacheLength = mustacheLength;
    this->nickName = nickName;
    this->breed = breed;
    this->type = type;
    this->age = age;
}

float Cat::getMustacheLength()
{
    return mustacheLength;
}

void Cat::setMustacheLength(float mustacheLength)
{
    this->mustacheLength = mustacheLength;
}

Cat::~Cat()
{
}
