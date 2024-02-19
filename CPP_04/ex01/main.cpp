
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"




int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
    Animal* a[10];

	for (int i = 0; i < 5; i++)
		a[i] = new Cat();
	for (int i = 5; i < 10; i++)
		a[i] = new Dog();
	for (int i = 0; i < 10; i++)
	{
		std::cout << a[i]->getType() << std::endl;
		a[i]->makeSound();
	}
	for (int i = 9; i >= 0; i--)
		delete a[i];
	return 0;
}
