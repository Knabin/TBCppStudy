#include <iostream>

using namespace std;

class A;

class B
{
private:
	int m_value = 2;

public:
	void doSomething(A& a);
};

class A
{
private:
	int m_value = 1;

	friend void B::doSomething(A& a);
};

void B::doSomething(A& a)
{
	cout << a.m_value << endl;
}


int main()
{
	A a;
	B b;
	b.doSomething(a);

	return 0;
}
