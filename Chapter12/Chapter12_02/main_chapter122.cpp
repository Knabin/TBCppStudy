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
	ref.print();	// virtual X: A / virtual O: B ���

	// B�� C�� ��ӹ��� �ʴ´ٸ� B�� ���
	// ���� ���� Ŭ������ virtual ������ �Ѵٸ� ���� Ŭ���� ���ΰ� �׷��� �۵���!!
	// ��ӹ޴� �͵鵵 virtual Ű���带 ���̴� �� ������ => ������� �� ����
	B &ref2 = c;
	ref2.print();

	return 0;
}