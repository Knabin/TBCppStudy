#include <iostream>
#include "Cents.h"

using namespace std;

template<typename T>
T getMax(T x, T y)
{
	return (x > y) ? x : y;
}
/*
int getMax(int x, int y)
{
	return (x > y) ? x : y;
}

double getMax(double x, double y)
{
	return (x > y) ? x : y;
}

float getMax(float x, float y)
{
	return (x > y) ? x : y;
}

char getMax(char x, char y)
{
	return (x > y) ? x : y;
}*/

int main()
{
	std::cout << getMax(1, 2) << std::endl;
	std::cout << getMax(3.14, 1.592) << std::endl;
	std::cout << getMax(1.0f, 3.4f) << std::endl;
	std::cout << getMax('a', 'c') << std::endl;

	// user defined type에 대해서도 템플릿 사용 가능
	// 단, 이 경우 << operator, < operator 등이 구현되어 있어야 사용 가능함 주의!
	// template instantiation
	std::cout << getMax(Cents(5), Cents(9)) << std::endl;

	return 0;
}
