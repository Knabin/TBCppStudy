#include <iostream>
using namespace std;

//covariant
class A
{
public:
	void print() { cout << "A" << endl; }
	virtual A* getThis()
	{
		cout << "A::getThis()" << endl;
		return this;
	}
};

class B : public A
{
public:
	void print() { cout << "B" << endl; }
	virtual B* getThis()
	{
		cout << "B::getThis()" << endl;
		return this;
	}
};

class C : public B
{
public:
	virtual void print() { cout << "C" << endl; }
};

int main()
{
	A a;
	B b;
	//C c;

	A &ref = b;
	b.getThis()->print();   // 출력: B
	ref.getThis()->print();   // 출력: A

	cout << typeid(b.getThis()).name() << endl;      // 출력: class B *
	cout << typeid(ref.getThis()).name() << endl;   // 출력: class A *

	return 0;
}