#include <iostream>

class Base
{
public:
	Base() {}

	// friend�� ����� �ƴϱ� ������ ���� overriding�� �� �� ����!!
	friend std::ostream& operator << (std::ostream &out, const Base &b)
	{
		return b.print(out);
	}

	// �������� ���� �������� �ѱ�Բ� �ؼ� overridingó�� ���� ����
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

	// ��� ����� virtual �Լ� ���� ���� �����ϴ� ������� �����ϴ� ��ĵ� ����
	// => �Ϲ����� ���α׷��� �������ε� ���� ����

	return 0;
}
