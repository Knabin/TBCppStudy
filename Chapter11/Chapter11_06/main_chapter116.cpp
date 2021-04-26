#include <iostream>
using namespace std;

class Base
{
protected:
	int m_value;
public:
	Base(int value)
		: m_value(value)
	{}
};

class Derived : public Base
{
public:
	Derived(int value)
		: Base(value)
	{}

	void setValue(int value)
	{
		Base::m_value = value;
		// do some work with the variables defined in Derived
	}
};

int main()
{

	return 0;
}