#include <iostream>

using namespace std;

class A
{
private:
	int m_x;
public:
	A(int x) : m_x(x)
	{
		if (x <= 0)
			throw 1;
	}
};

class B : public A
{
public:
	/*
	B(int x)
		: A(x)
	{}*/

	B(int x) try : A(x)
	{
		// do initialization
	}
	catch (...)
	{
		cout << "Catch in B constructor" << endl;
		//throw;	//생성자에서 function try를 사용할 경우, throw가 없어도 main의 catch에서 한 번 더 잡음!
	}
};

// function try
/*
void doSomething()
try
{
	throw - 1;
}
catch (...)
{
	cout << "Catch in doSomething()" << endl;
}*/


int main()
{
	try
	{
		//doSomething();
		B b(0);
	}
	catch (...)
	{
		cout << "Catch in main()" << endl;
	}
	return 0;
}
