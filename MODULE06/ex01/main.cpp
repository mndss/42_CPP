#include <serialize.hpp>

uintptr_t	serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

int main(void) {
	uintptr_t	raw;
	Data		data;
	Data *		dataPtr;

	data.num = 42;
	std::cout << "Data address: " << &data << std::endl;
	raw = serialize(&data);
	std::cout << "Raw address: " << raw << std::endl; 
	dataPtr = deserialize(raw);
	std::cout << "Data pointer: " << dataPtr << std::endl; 
}