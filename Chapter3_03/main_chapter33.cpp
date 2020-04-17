#include <iostream>

int add(int a, int b)
{
	return a + b;
}

int main()
{
	using namespace std;

	int x = 5;
	int y = --x;
	int z = x--;

	cout << y << endl;	// 4
	cout << z << endl;	// 4

	// ++a�� ���, a�� ���� 1�� ���ϰ� ���
	// a++�� ���, a�� ���� ����ϰ� 1�� ����
	int a = 6, b = 6;
	cout << a << " " << b << endl;		// 6 6
	cout << ++a << " " << --b << endl;	// 7 5
	cout << a << " " << b << endl;		// 7 5
	cout << a++ << " " << b-- << endl;	// 7 5
	cout << a << " " << b << endl;		// 8 4


	int e = 1;
	int v = add(e, ++e);	// do not use
	int f = 2;
	int v2 = add(e, ++f);

	cout << v << " " << v2 << endl;


	int g = 1;
	//g = g++;	do not use
	++g;

	return 0;
}