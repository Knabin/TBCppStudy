#include <iostream>
using namespace std;

int add(int x, int y)
{
	return x + y;
}

int subtract(int x, int y)
{
	return x - y;
}

int multiply(int x, int y)
{
	return x * y;
}

int main()
{
	int x, y;
	cin >> x >> y;

	int op;
	cout << "0 : add, 1 : subtract, 2 : multiply" << endl;
	cin >> op;

	// static binding (early binding)
	// 모든 변수명/함수명이 빌드할 때 정해져 있음
	// 속도가 빠름
	int result;
	switch (op)
	{
	case 0: result = add(x, y); break;
	case 1: result = subtract(x, y); break;
	case 2: result = multiply(x, y); break;
	}
	cout << result << endl;


	// dynamic binding (late binding)
	// function pointer에 어떤 함수 주소가 들어갈지 "런타임"에 결정됨
	// 속도가 static binding보다 느리나, 프로그래밍이 유연해짐!
	int(*func_ptr)(int, int) = nullptr;
	switch (op)
	{
	case 0: func_ptr = add; break;
	case 1: func_ptr = subtract; break;
	case 2: func_ptr = multiply; break;
	}
	cout << func_ptr(x, y) << endl;

	return 0;
}