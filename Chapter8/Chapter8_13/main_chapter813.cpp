#include <iostream>

using namespace std;

class A
{
public:
	int m_value;
	A(const int& input)
		: m_value(input)
	{
		cout << "Constructor" << endl;
	}

	~A()
	{
		cout << "Destructor" << endl;
	}

	void print()
	{
		cout << m_value << endl;
	}

	void printDouble()
	{
		cout << m_value * 2 << endl;
	}
};

int main()
{
	A a(1);
	a.print();
	a.printDouble();
	cout << endl;

	// R-value
	A(1).printDouble();
	A(2).printDouble();

	return 0;
}
