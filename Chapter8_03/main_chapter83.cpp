#include <iostream>

using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;
	
public:
	// ������, ��ȯ Ÿ��X class �̸��� ����
	// Fraction() �߰� �Ǵ� �⺻�� �����ϱ�!
	Fraction(const int& num_in = 1, const int& den_in = 1)
	{
		m_numerator = num_in;
		m_denominator = den_in;

		cout << "Fraction() constructor" << endl;
	}

	void print()
	{
		cout << m_numerator << " / " << m_denominator << endl;
	}
};

int main()
{
	// �����, ���������� �����ڸ� ���� �����Ŵ, parameter�� ���� ��� () ����!
	// �����ڰ� �ϳ��� ���� ��, �ƹ� �ϵ� ���� �ʴ� ����Ʈ �����ڸ� �����Ϸ��� ���� Fraction() { }
	// ��, �����ڸ� �ϳ��� �����Ѵٸ� ����Ʈ �����ڸ� �������� ����!! ����
	Fraction frac;
	frac.print();

	Fraction one_thirds(1, 5);
	Fraction one_thirds2(1);	// �⺻�� ���� �� ����
	one_thirds.print();

	Fraction frac2 = Fraction{ 1,3 };	// �����ϳ� ����X

	Fraction frac3{ 1, 3 };	// public�� ���� ������ ���� ó�� ����, private�� ������ ���� �Ұ���, Ÿ�� ��ȯ ���X
	Fraction frac4(1, 3);

	return 0;
}
