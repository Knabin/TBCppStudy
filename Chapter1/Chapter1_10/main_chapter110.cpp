#include <iostream>

using namespace std;

// forward declaration
// 최소한의 정보를 포함하고 있는 prototype을 통해 함수를 선언
int add(int a, int b);
int multiply(int a, int b);
int subtract(int a, int b);

int main()
{
	cout << add(1, 2) << endl;
	cout << subtract(1, 2) << endl;

	return 0;
}

// definition
// 함수의 정의
int add(int a, int b)
{
	return a + b;
}

int multiply(int a, int b)
{
	return a * b;
}

int subtract(int a, int b)
{
	return a - b;
}

