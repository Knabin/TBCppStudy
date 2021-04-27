#include <iostream>

int main()
{
	using namespace std;

	int x = 5;
	int y = 7;

	if (x != y)	//!x == y => !x의 우선순위가 더 높음, !(x == y)
	{
		cout << "x does not equal y" << endl;
	}
	else
		cout << "x equals y" << endl;


	int v = 1;

	if (v == 0 || v == 1)
		cout << "v is 0 or 1" << endl;


	// short circuit evaluation
	int a = 1;
	int b = 2;

	// AND는 왼쪽을 먼저 계산한 후, false라면 오른쪽을 계산하지 않음
	// 따라서 a가 1이 아닌 경우, b에 ++ 처리가 되지 않아 결과적으로 2가 출력됨
	if (a == 1 && b++ == 2)
	{
		// do something
	}

	cout << b << endl;


	bool c = true;
	bool d = false;

	// De Morgan's Law
	!(c && d);	// == !c || !d;
	!c && !d;	// == !(c || d);

	// XOR: C++에 존재하지 않음
	// false false	> false
	// false true	> true
	// true false	> true
	// true true	> false

	if (c != d)	// c와 d가 bool 타입이어야 함
	{

	}


	bool v1 = true;
	bool v2 = false;
	bool v3 = false;

	// 우선순위: && > || !!!
	// 괄호를 치는 것이 마음이 편하다...
	bool r1 = v1 || v2 && v3;
	bool r2 = (v1 || v2) && v3;
	bool r3 = v1 || (v2 && v3);

	cout << r1 << endl;
	cout << r2 << endl;

	return 0;
}