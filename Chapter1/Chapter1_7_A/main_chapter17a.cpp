#include <iostream>

using namespace std;

void doSomething(int x)
{
	x = 123;
	cout << x << endl;	// #2
	// 123 출력
}

int main()
{
	int x = 0;

	cout << x << endl;	// #1
	// 0 출력
	doSomething(x);
	cout << x << endl;	// #2
	// 0 출력

	return 0;
}