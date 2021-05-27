#include <iostream>
using namespace std;

class Base
{
public:
	~Base()
	{
		cout << "~Base()" << endl;
	}
};

class Derived : public Base
{
private:
	int *m_array;

public:
	Derived(int length)
	{
		m_array = new int[length];
	}

	~Derived()
	{
		cout << "~Derived()" << endl;
		delete[] m_array;
	}
};

int main()
{
	// 상속 구조에 따라서 자식 소멸자 후 부모 소멸자 호출
	Derived derived(5);
	cout << endl;

	// Base를 지우는 것이 일반적임 => Base()의 소멸자만 호출됨
	// 동적 할당 시 메모리 누수 발생!
	Derived *derived2 = new Derived(5);
	Base *base = derived2;
	delete base;

	return 0;
}