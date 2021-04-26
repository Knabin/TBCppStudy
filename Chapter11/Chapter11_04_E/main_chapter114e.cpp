#include <iostream>
using namespace std;

class A
{
public:
	A(int a)
	{
		cout << "A: " << a << endl;
	}
	~A()
	{
		cout << "Destructor A" << endl;
	}
};

class B : public A
{
public:
	B(int a, double b)
		: A(a)
	{
		cout << "B: " << b << endl;
	}
	~B()
	{
		cout << "Destructor B" << endl;
	}
};

class C : public B
{
public:
	C(int a, double b, char c)
		: B(a, b)
	{
		cout << "C: " << c << endl;
	}
	~C()
	{
		cout << "Destructor C" << endl;
	}
};

int main()
{
	C c(1024, 3.14, 'A');
	// �Ҹ��ڿ��� ���� �Ҵ���� �޸𸮸� ������ �ϴ� ��Ȳ�̶��
	// C���� �ش�Ǵ� �� �����, B���� �ش�Ǵ� �� �����... => ��������!

	return 0;
}