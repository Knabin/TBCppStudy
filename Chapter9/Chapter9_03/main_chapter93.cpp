#include <iostream>
#include <fstream>

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

	Cents operator - () const
	{
		return Cents(-m_cents);
	}

	bool operator ! () const
	{
		// 무엇을 return할 것인지를 문맥에 따라 결정해야 함!
		return (m_cents == 0) ? true : false;
	}

	friend std::ostream& operator << (std::ostream &out, const Cents &cents)
	{
		out << cents.m_cents;
		return out;
	}
};

int main()
{
	Cents cents1(6);
	Cents cents2(0);

	//int a = 3;
	//cout << -a << endl;
	//cout << !a << endl;

	cout << cents1 << endl;
	cout << -cents1 << endl;
	cout << -Cents(-10) << endl;

	auto temp = !cents1;
	cout << !cents1 << " " << !cents2 << endl;

	return 0;
}