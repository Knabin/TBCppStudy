#include <iostream>

using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;
	
public:
	// 생성자, 반환 타입X class 이름과 같음
	// Fraction() 추가 또는 기본값 지정하기!
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
	// 선언시, 내부적으로 생성자를 먼저 실행시킴, parameter가 없을 경우 () 빼기!
	// 생성자가 하나도 없을 때, 아무 일도 하지 않는 디폴트 생성자를 컴파일러가 만듦 Fraction() { }
	// 단, 생성자를 하나라도 정의한다면 디폴트 생성자를 생성하지 않음!! 주의
	Fraction frac;
	frac.print();

	Fraction one_thirds(1, 5);
	Fraction one_thirds2(1);	// 기본값 지정 시 가능
	one_thirds.print();

	Fraction frac2 = Fraction{ 1,3 };	// 가능하나 권장X

	Fraction frac3{ 1, 3 };	// public일 때는 생성자 없이 처리 가능, private시 생성자 없이 불가능, 타입 변환 허용X
	Fraction frac4(1, 3);

	return 0;
}