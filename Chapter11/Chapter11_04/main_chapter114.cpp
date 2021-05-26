#include <iostream>
using namespace std;

class Mother
{
private:
	int m_i;

public:
	Mother(const int & i_in = 0)
		: m_i(i_in)
	{
		cout << "Mother construction" << endl;
	}
};

class Child : public Mother
{
private:
	double m_d;

public:
	Child()
		: m_d(1.0), Mother(1024)
	{
		//this->m_i;
		//this->Mother::m_i;

		cout << "Child construction" << endl;
	}
};

int main()
{
	Child c1;

	cout << sizeof(Mother) << endl;
	cout << sizeof(Child) << endl;

	return 0;
}