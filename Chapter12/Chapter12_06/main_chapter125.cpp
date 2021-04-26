#include <iostream>
using namespace std;

class Base
{
public:
	//FuctionPointer *__vptr;
	virtual void fun1() {};
	virtual void fun2() {};
};

class Der : public Base
{
public:
	//FuctionPointer *__vptr;
	virtual void fun1() {};
	virtual void fun2() {};
};

int main()
{
	cout << sizeof(Base) << endl;	// 32비트 기준 출력: 1(virtual X) / 4(virtual O)
	cout << sizeof(Der) << endl;

	return 0;
}