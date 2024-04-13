#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	// Animal default_animal;
	// default_animal.getType();

	// Cat* cat = new Cat();
	// Dog* dog = new Dog();

	// cat->makeSound();
	// dog->makeSound();

	// delete cat;
	// delete dog;

	Animal* animals[4];

	for (int i = 0; i < 2; i++) {
		animals[i] = new Dog();
	}
	for (int i = 2; i < 4; i++) {
		animals[i] = new Cat();
	}

	for (int i = 0; i < 4; i++) {
		animals[i]->makeSound();
		delete animals[i];
	}

	return 0;
}