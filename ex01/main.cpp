#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	const Animal* animals[4]
		= {new Dog(), new Dog(), new Cat(), new Cat()};

	for (int i = 0; i < 4; i++) {
		animals[i]->makeSound();
		delete animals[i];
	}

	std::cout << "- - - - - -\n";
	// test copy constructor/assignment operator stack
	Cat stack_cat;
	Cat stack_cat2(stack_cat);
	Cat stack_cat3 = stack_cat;

	Dog stack_dog;

	Dog stack_dog2(stack_dog);
	Dog stack_dog3 = stack_dog;

	stack_dog.makeSound();
	stack_cat.makeSound();
	stack_dog2.makeSound();
	stack_cat2.makeSound();
	stack_dog3.makeSound();
	stack_cat3.makeSound();

	std::cout << "- - - Cat - - -\n";
	// test copy constructor/assignment operator heap / check for memory leaks
	Cat* heap_cats[3]
		= {new Cat(), new Cat(*heap_cats[0]), new Cat()};

	*heap_cats[2] = *heap_cats[0];
	heap_cats[2]->makeSound();

	delete heap_cats[0];
	delete heap_cats[1];
	delete heap_cats[2];
	std::cout << "- - - Dog/stack_cat - - -\n";

	Dog* heap_dog  = new Dog();
	Dog* heap_dog2 = new Dog(*heap_dog);
	Dog* heap_dog3 = new Dog();

	*heap_dog3     = *heap_dog;
	heap_dog2->makeSound();

	delete heap_dog;
	delete heap_dog2;
	delete heap_dog3;

	return 0;
}