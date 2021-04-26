#include <iostream>

using namespace std;

// ����� ���� �ڷ��������� ��� ������ ���� ����
class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; }

	//friend Cents operator + (const Cents &c1, const Cents &c2)
	//{
	//	return Cents(c1.getCents() + c2.getCents());
	//}

	// friend ���ְ� ��� �Լ��� ����Ϸ���... this ���
	// ��� �Լ��θ� �����ε��ؾ� �ϴ� ������: =, [], (), ->
	Cents operator + (const Cents &c2)
	{
		return Cents(this->getCents() + c2.getCents());
	}
};

void add(const Cents &c1, const Cents &c2, Cents &c_out)
{
	c_out.getCents() = c1.getCents() + c2.getCents();
}

Cents add(const Cents &c1, const Cents &c2)
{
	return Cents(c1.getCents() + c2.getCents());
}

int main()
{
	Cents cents1(6);
	Cents cents2(8);

	Cents sum;
	add(cents1, cents2, sum);

	cout << sum.getCents() << endl;

	cout << add(cents1, cents2).getCents() << endl;

	cout << (cents1 + cents2 + Cents(6) + Cents(10)).getCents() << endl;

	//int i = 6, j = 8; cout << i + j << endl;

	// �����ε��� �Ұ����� ������!
	// ?: :: sizeof . .*
	// �����ε��� ������ �켱������ �״����!! �����ε� �� �����ϱ�
	// ������ �ͺ��ٴ� ������ �� ����(������)
	// ^(XOR): �켱������ �ſ� ���Ƽ� ��ȣ�� �μ� ����ؾ� ��, �����ε� ����õ

	return 0;
}
