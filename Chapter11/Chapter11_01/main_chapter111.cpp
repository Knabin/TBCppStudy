#include <iostream>
using namespace std;

class Mother	// generalized class
{
private:	// �ڽ����׵� ���X
//public:	// �� ���� ����
//protected:	// private ���¸� �����ϸ鼭 �ڽĿ��Դ� ���
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

// Mother class�κ��� ���� Ŭ������ �����ؼ� ����� �� �� ����
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
		// Child�� �����ڰ� ȣ��� ���, Mother�� �����ڸ� ���� ȣ����!!
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
	// ���� �������� �ʾƵ� Mother Ŭ������ �͵� �״�� ��� ����!
	// => Child Ŭ�������� �����ϸ� Child�� ���� �켱���� �θ�
	/*child.setValue(128);
	child.Mother::setValue(1024);*/
	cout << child.Mother::getValue() << endl;
	cout << child.getValue() << endl;



	return 0;
}
