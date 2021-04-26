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
	// �Ű������� �ٸ���/const ������ �ٸ��� overriding �Ұ���
	// => override �����ϸ� �����Ϸ��� ���� ã�� ��
	//void print(short x) { cout << "B" << endl; }
	void print() final { cout << "B" << endl; }
	//void print1() { cout << "B" << endl; }
	//virtual B* getThis() { return this; }
};

class C : public B
{
public:
	// �θ� Ŭ�������� final ���� �� override �Ұ���
	//virtual void print() { cout << "C" << endl; }
};

int main()
{
	A a;
	B b;

	A &ref = b;
	//ref.print(1);   // ���: A
	//cout << typeid(b.getThis()).name() << endl;

	return 0;
}