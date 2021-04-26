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
	// 3A7F... ǥ���� �����ϱ� ������ ���� �����

	int x = 012;	// 8����, 10
	int y = 0xF;	// 16����, 15
	cout << x << endl;
	cout << y << endl;

	// binary literal
	int z = 0b1010;	// 2����, 10
	cout << z << endl;

	int a = 0b1011'1111'1010;	// �����Ϸ��� ���ͷ� �� '�� �����ϱ� ������ ���ڸ� ���� �ٷ� �� ����
	cout << a << endl;
	
	// magic number ��� �� �ּ� �ٴ� �ͺ��ٴ� ��� �̿��ϴ� ���� ����
	// magic number: Unique values with unexplained meaning or multiple occurrences
	//	             which could (preferably) be replaced with named constants
	const int price_per_item = 10;
	int num_items = 123;
	int price = num_items * price_per_item;

	return 0;
}	