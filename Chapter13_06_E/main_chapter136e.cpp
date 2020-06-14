#include <iostream>
using namespace std;

template <class T, int size>
class StaticArray_BASE
{
private:
	T my_array[size];

public:
	T * getArray() { return my_array; }

	T& operator[](int index)
	{
		return my_array[index];
	}

	void print()
	{
		for (int count = 0; count < size; ++count)
			std::cout << (*this)[count] << ' ';
		std::cout << std::endl;
	}
};

// ������� ó���ϴ� ����? ���ø��� ��°�� Ư��ȭ�ϴ� �ͺ��� ����
template <class T, int size>
class StaticArray : public StaticArray_BASE<T, size>
{
};

template <int size>
class StaticArray<char, size> : public StaticArray_BASE<char, size>
{
public:
	void print()
	{
		for (int count = 0; count < size; ++count)
			std::cout << (*this)[count];
		std::cout << std::endl;
	}
};


int main()
{
	StaticArray<int, 4> int4;
	int4[0] = 1;
	int4[1] = 2;
	int4[2] = 3;
	int4[3] = 4;

	int4.print();

	StaticArray<char, 14> char14;
	char14[0] = 'H';
	char14[1] = 'e';
	// ...
	strcpy_s(char14.getArray(), 14, "Hello, World");

	char14.print();

	return 0;
}