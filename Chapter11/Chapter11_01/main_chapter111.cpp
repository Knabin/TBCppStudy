#include <iostream>
using namespace std;

class Mother	// generalized class
{
private:	// 자식한테도 허용X
//public:	// 다 열어 버림
//protected:	// private 상태를 유지하면서 자식에게는 허용
	int m_i;

public:
	Mother(const int & i_in)
		: m_i(i_in)
	{
		std::cout << "Mother constructor" << std::endl;
	}

	void setValue(const int& i_in)
	{
		m_i = i_in;
	}

	int getValue()
	{
		return m_i;
	}
};

// Mother class로부터 많은 클래스를 유도해서 만들어 낼 수 있음
// Child class is derived from Mother class
class Child : public Mother	// derived class
{
private:
	double m_d;

public:
	Child(const int & i_in, const double & d_in)
		//: m_i(i_in), m_d(d_in)
		: Mother(i_in), m_d(d_in)
	{
		// Child의 생성자가 호출될 경우, Mother의 생성자를 같이 호출함!!
		/*Mother::setValue(i_in);
		m_d = d_in;*/
	}

	void setValue(const int & i_in, const double & d_in)
	{
		Mother::setValue(i_in);
		m_d = d_in;
		
	}

	void setValue(const double & d_in)
	{
		m_d = d_in;
	}

	double getValue()
	{
		return m_d;
	}
};

class Daughter : public Mother
{
};

class Son : public Mother
{

};

int main()
{
	Mother mother(1024);
	//mother.setValue(1024);
	cout << mother.getValue() << endl;

	Child child(1024, 128);
	// 따로 구현하지 않아도 Mother 클래스의 것들 그대로 사용 가능!
	// => Child 클래스에서 구현하면 Child의 것을 우선으로 부름
	/*child.setValue(128);
	child.Mother::setValue(1024);*/
	cout << child.Mother::getValue() << endl;
	cout << child.getValue() << endl;



	return 0;
}