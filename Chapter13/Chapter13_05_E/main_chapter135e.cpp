#include <iostream>
#include "Storage8.h"

using namespace std;

int main()
{
	Storage8<int> intStorage;

	for (int count = 0; count < 8; ++count)
		intStorage.set(count, count);
	for (int count = 0; count < 8; ++count)
		std::cout << intStorage.get(count) << '\n';

	cout << "Sizeof Storage8<int> " << sizeof(Storage8<int>) << endl;

	// Define a Storage8 for bool
	Storage8<bool> boolStorage;
	for (int count = 0; count < 8; ++count)
		boolStorage.set(count, count & 3);

	for (int count = 0; count < 8; ++count)
		std::cout << (boolStorage.get(count) ? "true" : "false") << '\n';

	cout << "Sizeof Storage8<bool> " << sizeof(Storage8<bool>) << endl;

	return 0;
}