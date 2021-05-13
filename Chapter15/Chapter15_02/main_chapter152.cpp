#include <iostream>

using namespace std;

void doSomething(int &lref)
{
	cout << "L-value ref" << endl;
}

void doSomething(int &&ref)
{
	cout << "R-value ref" << endl;
}

int getResult()
{
	return 100 * 100;
}

int main()
{
	int x = 5;
	int y = getResult();
	const int cx = 6;
	const int cy = getResult();

	// L-value references
	// x의 내용물을 옮겨 버리면 x를 통해서 접근할 수 없으니까 충돌이 생김

	int &lr1 = x;			// Modifiable l-values
	//int &lr2 = cx;		// Non-modifiable l-values
	//int &lr3 = 5;			// R-values

	const int &lr4 = x;		// Modifiable l-values
	const int &lr5 = cx;	// Non-modifiable l-values	
	const int &lr6 = 5;		// R-values


	// R-value references
	// 곧 사라질 것들만 담을 수 있음

	//int &&rr1 = x;		// Modifiable l-values
	//int &&rr2 = cx;		// Non-modifiable l-values
	int &&rr3 = 5;			// R-values
	int &&rrr = getResult();

	cout << rr3 << endl;
	rr3 = 10;
	cout << rr3 << endl;

	//const int &&rr4 = x;	// Modifiable l-values
	//const int &&rr5 = cx;	// Non-modifiable l-values
	const int &&rr6 = 5;	// R-values


	// L/R-value reference parameters
	doSomething(x);
	//doSomething(cx);
	doSomething(5);
	doSomething(getResult());

	return 0;
}