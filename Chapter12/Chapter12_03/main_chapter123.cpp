#include <iostream>
using namespace std;

class A
{
public:
	virtual void print() { cout << "A" << endl; }
	//virtual A* getThis() { return this; }
};

class B : public A
{
public:
	// 매개변수가 다르면/const 유무가 다르면 overriding 불가능
	// => override 선언하면 컴파일러가 에러 찾아 줌
	//void print(short x) { cout << "B" << endl; }
	void print() final { cout << "B" << endl; }
	//void print1() { cout << "B" << endl; }
	//virtual B* getThis() { return this; }
};

class C : public B
{
public:
	// 부모 클래스에서 final 선언 시 override 불가능
	//virtual void print() { cout << "C" << endl; }
};

int main()
{
	A a;
	B b;

	A &ref = b;
	//ref.print(1);   // 출력: A
	//cout << typeid(b.getThis()).name() << endl;

	return 0;
}