#include <iostream>
#include "Hamster.h"
#include "Dog.h"
#include "Cat.h"
#include "Parrot.h"
#include "Pet.h"
using namespace std;

int main()
{
	Pet* pet;
	pet = new Dog(true, "Michael", "Labrador", "Dog", 5);
	pet->Sound();
	pet->Show();
	pet->showType();
	delete pet;
}
