#include <iostream>
#include "MY_CONSTANTS.h"
#define PRICE_PER_ITEM 30	
// C++에서는 상수 대체용으로 매크로 사용 안 함!!
// 1. debugging 어려움
// 2. 적용 범위가 너무 넓음

using namespace std;

void printNumber(const int my_number)
{
	// 입력으로 들어온 값을 바꾸지는 않기 때문에 파라미터에 const를 많이 붙임
	// const int& 변수 형태로 많이 사용함
	// my_number = 456; error!
	int n = my_number;	// 바꿔야 한다면 따로 복사하여 사용함
	cout << my_number << endl;
}

int main()
{
	// 변수값이 변경되지 않아야 하는 경우, const를 통해 변수를 고정함
	// 주의! 선언과 동시에 초기화되어야 함
	// 주의! 자료형과 const 순서에 따라 의미가 달라지는 경우가 있음
	const double gravity{ 9.8 };
	double const gravity2{ 9.8 };	// ����

	// gravity = 1.2; error!

	printNumber(123);

	// compile time에 결정되는 상수
	// constexpr: 컴파일 때 결정되는 상수를 구분하기 위함
	const int my_const(123);
	constexpr int my_const2(123);

	int number;
	cin >> number;


	// 변수로 상수를 초기화
	// runtime에 결정되는 상수
	const int special_number(number);
	// constexpr int special_number(number); error!

	number = 123;
	// special_number(123); error!


	const int price_per_item = 30;
	int num_item = 123;
	//int price = num_item * PRICE_PER_ITEM;
	int price = num_item * price_per_item;


	// 헤더 파일 사용
	double radius;
	cin >> radius;
	double circumference = 2.0 * radius * constants::moongravity;

	return 0;
}