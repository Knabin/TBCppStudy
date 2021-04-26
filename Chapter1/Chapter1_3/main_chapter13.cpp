#include <iostream>

int main()
{
	int x;		// X : 메모리에 있는 어떠한 공간의 이름, 정수 하나 담을 크기(integer)
	x = 123;	// =: assignment operator, '대입'
	x = x + 2;	// 우측의 x는 R-value

	std::cout << x << std::endl;
	std::cout << &x << std::endl;	// ampersand

	int y = 123;	// initialization
	//int y(123); 가능
	y = 5;			// assignment

	return 0;
}