#include <iostream>

using namespace std;

void doSomething(int y)
{
	// 함수를 호출할 때 매개변수로 y를 필요로 함, 내부적으로 int y가 선언되고 거기에 5라는 값이 복사됨
	// 주소가 다르기 때문에 함수 안에서 무슨 짓을 하더라도 main에 영향을 줄 수 없음
	cout << "In func " << y << " " << &y << endl;
}

int main()
{
	doSomething(5);

	int x = 6;

	cout << "In main " << x << " " << &x << endl;

	// x라는 변수가 아니고, x 안에 있는 6이라는 value(값)만 argument로써 parameter로 전달
	doSomething(x);
	doSomething(x + 1);

	return 0;
}