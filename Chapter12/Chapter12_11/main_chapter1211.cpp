#include <iostream>

class Base
{
public:
	Base() {}

	// friend는 멤버가 아니기 때문에 직접 overriding을 할 수 없음!!
	friend std::ostream& operator << (std::ostream &out, const Base &b)
	{
		return b.print(out);
	}

	// 직접적인 일은 이쪽으로 넘기게끔 해서 overriding처럼 구현 가능
	virtual std::ostream& print(std::ostream& out) const
	{
		out << "Base";
		return out;
	}
};

class Derived : public Base
{
public:
	Derived() {}

	virtual std::ostream& print(std::ostream& out) const override
	{
		out << "Derived";
		return out;
	}
};

using namespace std;

int main()
{
	Base b;
	std::cout << b << '\n';

	Derived d;
	std::cout << d << '\n';

	Base &bref = d;
	std::cout << bref << '\n';

	// 어떠한 기능을 virtual 함수 여러 개를 조합하는 방식으로 구현하는 방식도 있음
	// => 일반적인 프로그래밍 전략으로도 많이 사용됨

	return 0;
}