#include <iostream>
#include <array>
#include <functional>

using namespace std;

int func(int x)
{
	return 5;
}

int goo()
{
	return 10;
}

bool isEven(const int &number)
{
	if (number % 2 == 0) return true;
	else return false;
}

bool isOdd(const int &number)
{
	if (number % 2 != 0) return true;
	else return false;
}

//void printNumbers(const array<int, 10> &my_array , bool print_even)
void printNumbers(const array<int, 10> &my_array, 
	bool (*check_fcn)(const int &) = isEven)	// �⺻�� ������ ����
{
	for (auto element : my_array)
	{
		if (check_fcn(element) == true) cout << element << " ";
		//if (!print_even && element % 2 == 1) cout << element << " ";
	}
	cout << endl;
}

typedef bool(*check_fcn_t)(const int &);
//using check_fcn_t = bool(*)(const int &);	// using�� ����

void printNumbers2(const array<int, 10> &my_array,
	check_fcn_t check_fcn = isEven)	// typedef �� using ��� ����
{
	// ...
}

void printNumbers3(const array<int, 10> &my_array,
	std::function<bool(const int &)> fcnptr)
{
	// ...
}


int main()
{
	func(1);		// �� �Լ��� ��� �ּҿ� �ִ��� �˾Ƴ���, �� ���α׷��� �����Ŵ
	cout << func << endl;	// �Լ��� �ּ� ���

	int(*fcnptr)(int) = func;	//fcnptr�� ��������, ���� ����
	cout << fcnptr(1) << endl;	// �Լ� ����

	//fcnptr = goo;	func() => func(int) ���� �Ŀ��� error!
	//cout << fcnptr() << endl;


	std::array<int, 10> my_array = { 0,1,2,3,4,5,6,7,8,9 };

	printNumbers(my_array);
	printNumbers(my_array, isOdd);


	// C++ 11
	std::function<bool(const int &)> fcnptr = isEven;
	printNumbers3(my_array, fcnptr);


	return 0;
}