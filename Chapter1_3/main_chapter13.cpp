#include <iostream>

int main()
{
	int x;		// X: �޸𸮿� �ִ� ��� ������ �̸�, ���� �ϳ� ���� ũ��(integer)
	x = 123;	// =: assignment operator, '����'
	x = x + 2;	// ������ x�� R-value

	std::cout << x << std::endl;
	std::cout << &x << std::endl;	// ampersand

	int y = 123;	// initialization
	//int y(123); ����
	y = 5;			// assignment

	return 0;
}