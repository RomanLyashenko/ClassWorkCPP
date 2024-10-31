#include "String.h"

String::String()
{
	this->str = new char[80];
	this->size = 80;
	this->length = 0;
}

String::String(int size)
{
	this->str = new char[size];
	this->size = size;
	this->length = 0;
}

String::String(char* str, int length)
{
	this->str = new char[length];
	this->size = length;
	this->length = length;
	for (int i = 0; i < length; i++) {
		this->str[i] = str[i];
	}
}

String::String(const String& str)
{
	this->str = new char[str.size];
	for (int i = 0; i < str.size; i++) {
		this->str[i] = str.str[i];
	}
	this->size = str.size;
	this->length = str.length;
}

int String::getSize()
{
	return this->size;
}

int String::getLength()
{
	return this->length;
}

const char* String::getStr()
{
	return this->str;
}

char* String::gets(char* str)
{
	return nullptr;
}

void String::setStr()
{
	cin >> this->str;
	gets(this->str);
}

String::~String()
{
	delete[] this->str;
}
