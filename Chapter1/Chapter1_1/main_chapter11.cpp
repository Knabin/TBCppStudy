#include <iostream>
/*
preprocessor directive
#: 전처리기
iostream: input output stream
*/

int main(void)
{
	(1 + 2) * (3 + 4);	// expression

	int x = 2;	// x: 변수, 정수형의 데이터를 담을 수 있는 메모리 공간
	x = 5;		// 5: 리터럴(literal)
	int y = x + 3;

	std::cout << y << std::endl;
	std::cout << 1 + 2 << std::endl;
	// std : cout이라는 함수가 정의된 이름공간(namespace), standard library
	// namespace : 비슷한 기능을 하는 함수를 묶어 놓거나 나눠 놓기 위해서 사용함
	// << : 연산자 output operator

	return 0;	// return statement
}