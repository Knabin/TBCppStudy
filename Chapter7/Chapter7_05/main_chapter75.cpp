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
	return new int[size];	// 주소 반환
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
	int value = getValue(3);	// getValue(int)에서 return된 값이 복사되어 들어감


	// return by address
	int value2 = *getValue2(3);	// 권장X, getValue2(int)의 value는 함수가 끝나면 사라짐! 안전하지 못함
	int *value3 = getValue2(3);	// 더 위험함!!
	// warning C4172: returning address of local variable or temporary: value
	
	//int *array = new int[10];
	int *array = allocateMemory(1024);
	delete[] array;


	// return by reference
	int value4 = getValue3(5);
	int &value5 = getValue3(5);	// reference로 받으면? 함수가 끝나면 사라지는 지역변수의 주소값을 받음
	// warning C4172: returning address of local variable or temporary: value

	cout << value5 << endl;
	cout << value5 << endl;	// 쓰레기값 호출


	std::array<int, 100> my_array;	// 메모리가 명확하게 잡혀 있음
	my_array[30] = 10;

	get(my_array, 30) *= 10;	// 변수인 것처럼 사용 가능

	cout << my_array[30] << endl;
	cout << endl;


	// return struct
	// 구조체를 만들 때마다 함수를 만들어야 함
	S my_s = getStruct();
	my_s.b;


	// return tuple
	std::tuple<int, double> my_tp = getTuple();
	cout << std::get<0>(my_tp) << endl;	// a
	cout << std::get<1>(my_tp) << endl;	// d


	// C++ 11
	auto[a, d] = getTuple();	// 각각 변수를 선언하면서 받아 줌
	cout << a << endl;
	cout << d << endl;


	return 0;
}