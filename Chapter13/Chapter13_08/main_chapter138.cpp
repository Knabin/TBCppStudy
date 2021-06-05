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

	// TT: doSomething()에서만 적용되는 template parameter
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

	// <float>: TT가 어떤 타입인지 명시, 매개변수를 넣는 경우 생략 가능
	a_int.doSomething<float>(123.4);	//truncation from 'double' to 'const TT'
	a_int.doSomething(123.4);

	A<char> a_char('A');
	a_char.print();
	a_char.doSomething(int());

	return 0;
}