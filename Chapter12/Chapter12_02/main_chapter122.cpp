#include <iostream>
using namespace std;

class A
{
public:
	virtual void print() { cout << "A" << endl; }
};

class B : public A
{
public:
	//void print() { cout << "B" << endl; }
	virtual void print() { cout << "B" << endl; }
};

class C : public B
{
public:
	void print() { cout << "C" << endl; }
};

class D : public C
{
public:
	//virtual int print() { cout << "D" << endl; }	// error!
	void print() { cout << "D" << endl; }
};

int main()
{
	A a;
	B b;
	C c;
	D d;

	A &ref = b;
	ref.print();	// virtual X: A / virtual O: B 출력

	// B가 C를 상속받지 않는다면 B가 출력
	// 가장 상위 클래스에 virtual 선언을 한다면 하위 클래스 전부가 그렇게 작동함!!
	// 상속받는 것들도 virtual 키워드를 붙이는 게 관습임 => 디버깅할 때 편리함
	B &ref2 = c;
	ref2.print();

	return 0;
}