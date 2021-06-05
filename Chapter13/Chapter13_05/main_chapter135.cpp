#include <iostream>
#include <array>

using namespace std;

template<typename T>
class A
{
public:
	A(const T& input)
	{
	}

	void doSomething()
	{
		cout << typeid(T).name() << endl;
	}

	void test()
	{}
};

template<>
class A<char>
{
public:
	A(const char & temp)
	{}

	void doSomething()
	{
		cout << "Char type specialization" << endl;
	}
};

int main()
{
	// C++17에서는 컴파일 가능!
	//A a_int(1);
	A<int> a_int(1);
	A<double> a_double(3.14);
	A<char> a_char('A');

	// 주의사항: 다른 클래스라고 보면 됨!!
	a_int.test();
	a_double.test();
	//a_char.test();	// error! 없음

	a_int.doSomething();
	a_double.doSomething();
	a_char.doSomething();

	return 0;
}