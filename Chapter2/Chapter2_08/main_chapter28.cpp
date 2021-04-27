#include <iostream>

int main()
{
	using namespace std;

	float pi = 3.14f;
	int i = 1234u;		// u: unsigned, l: long, UL: unsigned long ...
	int i2 = (unsigned int)1234;

	unsigned int n = 5u;
	long n2 = 5L;
	double d = 6.0e-10;

	// decimal	: 0 1 2 3 4 5 6 7 8 9 10
	// octal	: 0 1 2 3 4 5 6 7 10 11 12 13
	// hexa		: 0 1 2 3 4 5 6 7 8 9 A B C D E F 10

	// 0011 1010 1111 1111
	// 3A7F... 표현이 간편하기 때문에 많이 사용함

	int x = 012;	// 8진수, 10
	int y = 0xF;	// 16진수, 15
	cout << x << endl;
	cout << y << endl;

	// binary literal
	int z = 0b1010;	// 2진수, 10
	cout << z << endl;

	int a = 0b1011'1111'1010;	// 컴파일러가 리터럴 속 '를 무시하기 때문에 숫자를 직접 다룰 때 편리함
	cout << a << endl;
	
	// magic number 사용 후 주석 다는 것보다는 상수 이용하는 것이 좋음
	// magic number: Unique values with unexplained meaning or multiple occurrences
	//	             which could (preferably) be replaced with named constants
	const int price_per_item = 10;
	int num_items = 123;
	int price = num_items * price_per_item;

	return 0;
}	