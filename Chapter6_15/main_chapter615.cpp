#include <iostream>

using namespace std;

void doSomething(const int& x)	// 장점: 복사X
{
	cout << x << endl;
}

int main()
{
	int a = 1;

	doSomething(a);
	doSomething(1);	// parameter가 const reference라면 가능!
	doSomething(a + 3);
	doSomething(3 * 4);


	return 0;
}