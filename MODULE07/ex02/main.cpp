#include <Array.hpp>

int main(void) {

	Array<int> a(5);

	a[0] = 3;
	a[1] = 5;
	a[2] = 2;
	a[3] = 1;
	a[4] = 0;

	for (int i = 0; i < 5; i++) {
		std::cout << a[i] << std::endl;
	}
	Array<int> b(a);
	for (int i = 0; i < 5; i++) {
		std::cout << a[i] << std::endl;
	}
}