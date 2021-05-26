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
	// 소멸자에서 동적 할당받은 메모리를 지워야 하는 상황이라면
	// C에만 해당되는 걸 지우고, B에만 해당되는 걸 지우고... => 역순으로!

	return 0;
}