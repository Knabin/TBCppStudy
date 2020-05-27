#include <iostream>
using namespace std;

class Mother
{
public:
	int m_i;

	/*
	Mother()
		: m_i(1)
	{
		cout << "Mother construction" << endl;
	}
	*/

	// �⺻ ���� ������, �⺻ ������ Mother() ���� ������ �ʿ� X
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
		//: m_i(1024)	// error!
		: m_d(1.0), Mother(1024)	// ���� ����: Mother() -> Child()
	{
		//�θ� Ŭ���� �����ڿ��� ���� �ʱ�ȭ�� �� m_i�� ���� ������!! (public�� ���)
		this->m_i;
		this->Mother::m_i;

		cout << "Child construction" << endl;
	}
};

int main()
{
	Child c1;
	return 0;
}