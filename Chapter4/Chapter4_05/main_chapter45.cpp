#include <iostream>
#include <typeinfo>
#include <iomanip>

int main()
{
	using namespace std;

	int a = 123;
	int b = 123.0;	// 경고는 뜨나, 컴파일 가능함
	int bb = (int)123.0;	// 명시적 형변환

	// 어떠한 data type인지 출력, auto와 형변환에서 유용하게 사용
	cout << typeid(4.0).name() << endl;
	cout << typeid(a).name() << endl;


	// numeric promotion: 작은 것 -> 큰 것, 큰 문제가 없음
	float f = 1.0f;
	double d = f;

	// numeric conversion(변환)
	double d2 = 3;
	short s = 2;

	int i = 30000;
	char c = i;	// char 범위에 안 들어감

	int i2 = 2;
	char c2 = i2;	// char 범위에 들어가기 때문에 문제 없음

	// char로 출력하면 문자로 출력되기 때문에 명시적 형변환 필요
	cout << static_cast<int>(c) << endl;	// 출력: 48
	cout << static_cast<int>(c2) << endl;	// 출력: 2


	double d3 = 0.123456789;
	float f2 = d3;	// 정밀도가 부족해서 완벽하게 출력하지는 못함

	cout << std::setprecision(12) << d3 << endl;	// 출력: 0.123456789
	cout << std::setprecision(12) << f2 << endl;	// 출력: 0.123456791043


	int i3 = 1234;
	float f3 = i;

	cout << std::setprecision(12) << f3 << endl;	// 출력: 1234.0


	float f4 = 3.14;
	int i4 = f4;	// 소수점 "버림" / 반올림, 올림, 버림의 함수는 따로 있음

	cout << i4 << endl;	// 출력: 3


	// unsigned <-> signed는 문제가 생길 수 있으니 조심히 다뤄야 함
	cout << 5u - 10 << endl;
	cout << 5u - 10u << endl;

	// 우선순위: int < unsigned int < long < unsigned long <
	//       long long < unsigned long long < float < double < long double


	// 암시적 형변환
	int x = (int)4.0;	// c style
	int y = int(4.0);	// cpp style, int 타입의 instance를 만들어 넣음
	int z = static_cast<int>(4.0);	// 최근


	return 0;
}