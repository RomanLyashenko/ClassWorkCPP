#pragma once
using namespace std;
#include <iostream>

class Pet    
{
protected:
	string nickName;
	string breed;
	string type;
	int age;
public:
	Pet() {}
	Pet(string nickName, string breed, string type, int age);
	string getNickName();
	void setNickName(string nickName);
	string getBreed();
	void setBreed(string breed);
	string getType();
	void setType(string type);
	int getAge();
	void setAge(int age);

	virtual void Sound() = 0; // звук данных
	virtual void Show() = 0; // имя животного
	virtual void showType() = 0; // название подвида

	virtual ~Pet();
};

