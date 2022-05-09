#include <AAnimal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>


void	checkCatCopy(Cat *src) {
	std::cout << src->getType() << std::endl;
	src->makeSound();
	src->setIdeaBrain("Can i eat any fish now??", 0);
	std::cout << src->getIdeaBrain(0) << std::endl;
}


void	checkDogCopy(Dog *src) {
	std::cout << src->getType() << std::endl;
	src->makeSound();
	src->setIdeaBrain("If a fast car passes by I'll bark at the wheel", 0);
	std::cout << src->getIdeaBrain(0) << std::endl;
}

int main() {
	AAnimal* animalArray[10];


	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) {
			animalArray[i] = new Cat();
		}
		else {
			animalArray[i] = new Dog();
		}
	}
	checkDogCopy((Dog *)animalArray[1]);
	checkCatCopy((Cat *)animalArray[0]);
	for (int i = 0; i < 10; i++) {
		delete animalArray[i];
	}
	return 0;
}
