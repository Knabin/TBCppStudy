#include "MyArray.h"

int main()
{
	MyArray<double> my_array(10);

	for (int i = 0; i < my_array.getLength(); ++i)
		my_array[i] = i * 0.5;

	MyArray<char> my_array_c(10);

	for (int i = 0; i < my_array_c.getLength(); ++i)
		my_array_c[i] = i + 65;

	my_array.print();
	my_array_c.print();

	return 0;
}