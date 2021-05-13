#include <iostream>

using namespace std;

void doSomething(const int& x)	// 장점: 복사 X
{
	cout << x << endl;
}

int main()
{
	int a = 1;

	doSomething(a);
	doSomething(1);	// parameter에 const reference 붙여도 사용 가능!
	doSomething(a + 3);
	doSomething(3 * 4);

	return 0;
}