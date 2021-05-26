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

	// 기본 값을 넣으면, 기본 생성자 Mother() 따로 구현할 필요 X
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
		: m_d(1.0), Mother(1024)	// 접근 순서: Mother() -> Child()
	{
		//부모 클래스 생성자에서 먼저 초기화한 후 m_i에 접근 가능함!! (public의 경우)
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