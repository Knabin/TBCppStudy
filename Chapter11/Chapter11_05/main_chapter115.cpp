#include <iostream>
using namespace std;

class Base
{
public:
	int m_public;
protected:
	int m_protected;
private:
	int m_private;
};

class Derived : public Base
{
public:
	Derived()
	{
		m_public = 123;	// == this->m_public, Base::m_public
		m_protected = 123;
		//m_private = 123;
	}
};

class Derived2 : protected Base
{
public:
	Derived2()
	{
		m_public = 123;
		m_protected = 123;
		//m_private = 123;
	}
};

// private으로 상속받는 경우, 상속받은 클래스의 자식 클래스(GrandChild)에서 Base에서 받은 변수에 접근 불가능!!
class Derived3 : private Base
{
public:
	Derived3()
	{
		m_public = 123;
		m_protected = 123;
		//m_private = 123;
	}
};

class GrandChild : public Derived3
{
public:
	GrandChild()
	{
		//m_public = 123;
		//m_protected = 123;
		//m_private = 123;
	}
};

int main()
{
	Base base;

	base.m_public = 123;
	//base.m_protected = 123;
	//base.m_private = 123;


	Derived d;

	d.m_public = 123;
	//d.m_protected = 123;
	//d.m_private = 123;


	Derived2 d2;
	//d2.m_public = 123;	// 외부에서 접근 불가능!!
	//d2.m_protected = 123;
	//d2.m_private = 123;

	return 0;
}