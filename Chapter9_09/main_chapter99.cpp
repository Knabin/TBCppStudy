#include <iostream>
#include <cassert>

using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	Fraction(int num = 0, int den = 1)
		: m_numerator(num), m_denominator(den)
	{
		assert(den != 0);
	}

	// private�� �Ű� �ָ�, �ܺο��� ����� �� ����! ���� �Ұ���!
	// ���ȼ��� �߿�� �ϴ� ��� ����ϱ⵵ ��
	Fraction(const Fraction &fraction)	// copy constructor
		: m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
	{
		// �󸶳� ���� ȣ��Ǵ��� �˾ƺ��� ���� ��¹�
		cout << "Copy constructor called" << endl;
	}

	friend std::ostream & operator << (std::ostream & out, const Fraction & f)
	{
		out << f.m_numerator << " / " << f.m_denominator << endl;
		return out;
	}
};

Fraction doSomething()
{
	Fraction temp(1, 2);
	cout << &temp << endl;
	return temp;
}


int main()
{
	Fraction frac(3, 5);

	Fraction fr_copy(frac);
	Fraction fr_copy2 = frac;	// �� ��쿡�� copy constructor ȣ���

	cout << frac << fr_copy << fr_copy2 << endl;

	// �� ��쿡�� copy constructor ���� X!! => �����Ϸ��� ������
	Fraction fr_copy3(Fraction(3, 10));

	//   debug: copy constructor ����
	// release: copy constructor ���� X, ��ȯ�� ����ȭ(�����Ϸ�)
	// debug ��忡���� �ٸ� �ּ�(���� ���� ����), release ��忡���� ���� �ּ� ���
	Fraction result = doSomething();
	cout << &result << endl;

	return 0;
}