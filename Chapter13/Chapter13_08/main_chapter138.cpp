#include <iostream>
using namespace std;

template<class T>
class A
{
private:
	T m_value;

public:
	A(const T & input)
		: m_value(input)
	{
	}

	// TT: doSomething()������ ����Ǵ� template parameter
	template<typename TT>
	void doSomething(const TT & input)
	{
		cout << typeid(T).name() << " " << typeid(TT).name() << endl;
		cout << (TT)m_value << endl;
	}

	void print()
	{
		cout << m_value << endl;
	}
};

int main()
{
	A<int> a_int(123);
	a_int.print();

	// <float>: TT�� � Ÿ������ ���, �Ű������� �ִ� ��� ���� ����
	a_int.doSomething<float>(123.4);	//truncation from 'double' to 'const TT'
	a_int.doSomething(123.4);

	A<char> a_char('A');
	a_char.print();
	a_char.doSomething(int());

	return 0;
}