#include <iostream>

using namespace std;

int foo(int x, int y);

// parameter: 함수가 어떤 기능을 하는지, 바꿔 주는 역할
int foo(int x, int y)
{
	// like... int x, y;
	return x + y;
} // x and y are destroyed here, 함수가 끝남과 동시에 소멸됨

int main()
{
	int x = 1, y = 2;

	foo(6, 7);	// 6, 7: arguments (actual parameters)
	foo(x, y + 1);	// x에 있는 값이 argument로, 함수의 parameter로 들어간다
	// 항상 x에 있는 값만 전달되는 것은 아니다? (값, 참조, 주소에 의한 전달)

	return 0;
}