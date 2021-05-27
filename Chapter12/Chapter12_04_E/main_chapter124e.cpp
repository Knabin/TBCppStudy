#include <iostream>
using namespace std;

class Base
{
public:
	// 부모 클래스의 소멸자를 virtual로 선언하면 해결!
	virtual ~Base()
	{
		cout << "~Base()" << endl;
	}
};

class Derived : public Base
{
private:
	int *m_array;

public:
	Derived(int length)
	{
		m_array = new int[length];
	}

	// 부모 소멸자에 virtual 붙였으면 자식 소멸자에 override 표시할 수 있음
	~Derived() override
	{
		cout << "~Derived()" << endl;
		delete[] m_array;
	}
};

int main()
{
	Derived *derived2 = new Derived(5);
	Base *base = derived2;
	delete base;

	return 0;
}