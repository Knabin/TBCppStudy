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

	// private로 옮겨 주면, 외부에서 사용할 수 없음! 복사 불가능!
	// 보안성을 중요시 하는 경우 사용하기도 함
	Fraction(const Fraction &fraction)	// copy constructor
		: m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
	{
		// 얼마나 자주 호출되는지 알아보기 위한 출력문
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
	Fraction fr_copy2 = frac;	// 이 경우에도 copy constructor 호출됨

	cout << frac << fr_copy << fr_copy2 << endl;

	// 이 경우에는 copy constructor 실행 X!! => 컴파일러가 생략함
	Fraction fr_copy3(Fraction(3, 10));

	//   debug: copy constructor 실행
	// release: copy constructor 실행 X, 반환값 최적화(컴파일러)
	// debug 모드에서는 다른 주소(따라서 복사 진행), release 모드에서는 같은 주소 출력
	Fraction result = doSomething();
	cout << &result << endl;

	return 0;
}