#include <Base.hpp>

Base*	generate(void) {
	int num = rand() % 3;
	switch (num)
	{
	case 0:
		return new A();
		break;
	case 1:
		return new B();
		break;
	case 2:
		return new C();
		break;
	default:
		return NULL;
		break;
	}
}

void	identify(Base* p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "Type A" << std::endl;
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "Type B" << std::endl;
	} else if (dynamic_cast<C*>(p)) {
		std::cout << "Type C" << std::endl;
	} else {
		std::cout << "Invalid pointer" << std::endl;
	}
}

void	identify(Base& p) {
	try {
		A typeA = dynamic_cast<A&>(p);
		std::cout << "Type A" << std::endl;
	} catch (std::exception &bc) {
		try {
			B typeB = dynamic_cast<B&>(p);
			std::cout << "Type B" << std::endl;
		} catch (std::exception &bc) {
			try {
				C typeC = dynamic_cast<C&>(p);
				std::cout << "Type C" << std::endl;
 			} catch (std::exception &bc) {
				std::cout << "Invalid reference" << std::endl;
			}
		}
	}
}

int main(void) {
	Base* base = generate();
	identify(base);
	identify(*base);
	delete base;

	Base* base2 = generate();
	identify(base);
	identify(*base);
	delete base2;

	Base* base3 = generate();
	identify(base);
	identify(*base);
	delete base3;

	A* a = new A();
	identify(a);
	identify(*a);
	delete a;

	B* b = new B();
	identify(b);
	identify(*b);
	delete a;

	C* c = new C();
	identify(c);
	identify(*c);
	delete a;
}