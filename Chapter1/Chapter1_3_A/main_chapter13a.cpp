#include <iostream>

int main()
{
	int x = 1;
	x = x + 2;
	std::cout << x << std::endl;		 // #1
	// 출력 : 3

	int y = x;
	std::cout << y << std::endl;		 // #2
	// 출력 : 3

	// is (x + y) l-value or r-value? => r-value
	std::cout << x + y << std::endl;	 // #3
	// 출력 : 6

	std::cout << x << std::endl;		 // #4
	// 출력 : 3

	int z;
	// std::cout << z << std::endl;		 // #5
	// 빌드 오류가 남

	return 0;
}