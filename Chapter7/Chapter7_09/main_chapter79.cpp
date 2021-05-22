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
	bool (*check_fcn)(const int &) = isEven)	// 기본값 설정도 가능
{
	for (auto element : my_array)
	{
		if (check_fcn(element) == true) cout << element << " ";
		//if (!print_even && element % 2 == 1) cout << element << " ";
	}
	cout << endl;
}

typedef bool(*check_fcn_t)(const int &);
//using check_fcn_t = bool(*)(const int &);	// using도 가능

void printNumbers2(const array<int, 10> &my_array,
	check_fcn_t check_fcn = isEven)	// typedef 및 using 사용 가능
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
	func(1);		// 이 함수가 어느 주소에 있는지 알아내고, 그 프로그램을 실행시킴
	cout << func << endl;	// 함수의 주소 출력

	int(*fcnptr)(int) = func;	//fcnptr은 변수명임, 변경 가능
	cout << fcnptr(1) << endl;	// 함수 실행

	//fcnptr = goo;	func() => func(int) 수정 후에는 error!
	//cout << fcnptr() << endl;


	std::array<int, 10> my_array = { 0,1,2,3,4,5,6,7,8,9 };

	printNumbers(my_array);
	printNumbers(my_array, isOdd);


	// C++ 11
	std::function<bool(const int &)> fcnptr = isEven;
	printNumbers3(my_array, fcnptr);


	return 0;
}