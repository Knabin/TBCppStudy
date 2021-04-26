#include <iostream>

using namespace std;

class Something
{
public:
	// inner class
	// class ������ static ������ �ʱ�ȭ�ϴ� ��ó�� ������ �� ����
	class _init
	{
	public:
		_init()
		{
			s_value = 9876;
		}
	};

private:
	static int s_value;
	int m_value;

	static _init s_initializer;

public:
	Something()
		: m_value(123)//, s_value(1024)	// error! static ������ ����X
	{

	}

	static int getValue()
	{
		//return this->s_value;	//error! nonstatic function������ ����
		//return m_value;	//error! this�� �����ؾ� �ϴ� ��� �� �Ұ���
		return s_value;
	}

	int temp()
	{
		// this: Ư�� �ν��Ͻ��� �� ��� ���� ����ϰڴ�
		return this->s_value;
	}
};

int Something::s_value = 1024;
Something::_init Something::s_initializer;

int main()
{
	// �ν��Ͻ� ���� ��, static ��� ���� ���� ����
	// private��� �ϸ� ���� �Ұ���!! => static �Լ� ȣ��
	//cout << Something::s_value << endl;
	cout << Something::getValue() << endl;

	Something s1, s2;
	cout << s1.getValue() << endl;
	//cout << s1.s_value << endl;


	// member function pointer
	// �Լ��� �ּҰ� ����! s1�� ����, s2�� ���ΰ� �ƴ϶� Something�� temp�� �ϳ� �ְ�,
	// s1�� �ִ� �� ������ �� �Լ��� ������Ѷ�!
	//int (Something::*fpr1)() = &s1.temp;
	int (Something::*fptr1)() = &Something::temp;

	//s2.*fptr1 => s2��� �ν��Ͻ��� �����͸� �Ѱ� �ְ�, temp�� �۵��ϴ� ����
	cout << (s2.*fptr1)() << endl;


	// �ν��Ͻ��� ���� ���� �����ų �� ����
	int (*fptr2)() = &Something::getValue;
	cout << fptr2() << endl;


	return 0;
}
