#include <iostream>

using namespace std;

void doSomething(const int& x)	// ����: ����X
{
	cout << x << endl;
}

int main()
{
	int a = 1;

	doSomething(a);
	doSomething(1);	// parameter�� const reference��� ����!
	doSomething(a + 3);
	doSomething(3 * 4);


	return 0;
}