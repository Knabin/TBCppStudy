#include <iostream>

using namespace std;

// 사용자 정의 자료형에서도 산술 연산자 정의 가능
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

	// friend 없애고 멤버 함수로 사용하려면... this 사용
	// 멤버 함수로만 오버로딩해야 하는 연산자: =, [], (), ->
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

	// 오버로딩이 불가능한 연산자!
	// ?: :: sizeof . .*
	// 오버로딩은 연산자 우선순위는 그대로임!! 오버로딩 시 주의하기
	// 위험한 것보다는 불편한 게 낫다(ㅋㅋㅋ)
	// ^(XOR): 우선순위가 매우 낮아서 괄호로 싸서 사용해야 함, 오버로딩 비추천

	return 0;
}