#include <iostream>
#include <array>
#include <tuple>

using namespace std;

struct S
{
	int a, b, c, d;
};

int getValue(int x)
{
	int value = x * 2;
	return value;
}

int* getValue2(int x)
{
	int value = x * 2;
	return &value;
}

int* allocateMemory(int size)
{
	return new int[size];	// �ּ� ��ȯ
}

int& getValue3(int x)
{
	int value = x * 2;
	return value;
}

int& get(std::array<int, 100>& my_array, int idx)
{
	return my_array[idx];	// return reference
}

S getStruct()
{
	S my_s{ 1,2,3,4 };
	return my_s;
}

std::tuple<int, double> getTuple()
{
	int a = 10;
	double d = 3.14;
	return std::make_tuple(a, d);
}

int main()
{
	// return by value
	int value = getValue(3);	// getValue(int)���� return�� ���� ����Ǿ� ��


	// return by address
	int value2 = *getValue2(3);	// ����X, getValue2(int)�� value�� �Լ��� ������ �����! �������� ����
	int *value3 = getValue2(3);	// �� ������!!
	// warning C4172: returning address of local variable or temporary: value
	
	//int *array = new int[10];
	int *array = allocateMemory(1024);
	delete[] array;


	// return by reference
	int value4 = getValue3(5);
	int &value5 = getValue3(5);	// reference�� ������? �Լ��� ������ ������� ���������� �ּҰ��� ����
	// warning C4172: returning address of local variable or temporary: value

	cout << value5 << endl;
	cout << value5 << endl;	// �����Ⱚ ȣ��


	std::array<int, 100> my_array;	// �޸𸮰� ��Ȯ�ϰ� ���� ����
	my_array[30] = 10;

	get(my_array, 30) *= 10;	// ������ ��ó�� ��� ����

	cout << my_array[30] << endl;
	cout << endl;


	// return struct
	// ����ü�� ���� ������ �Լ��� ������ ��
	S my_s = getStruct();
	my_s.b;


	// return tuple
	std::tuple<int, double> my_tp = getTuple();
	cout << std::get<0>(my_tp) << endl;	// a
	cout << std::get<1>(my_tp) << endl;	// d


	// C++ 11
	auto[a, d] = getTuple();	// ���� ������ �����ϸ鼭 �޾� ��
	cout << a << endl;
	cout << d << endl;


	return 0;
}