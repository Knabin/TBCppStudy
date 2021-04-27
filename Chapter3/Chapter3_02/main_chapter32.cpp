#include <iostream>

int main()
{
	using namespace std;

	int x = 7;
	int y = -x;	// -x: x의 sign 변경
	int a = 4;
	int z = x % a;	// %: 나머지 계산

	// 정수 나머지와 실수 나머지, 둘 중 하나만 실수여도 결과는 실수!
	cout << x / a << endl;	// 1
	cout << float(x) / a << endl;	// 1.75
	cout << x / float(a) << endl;	// 1.75
	cout << float(x) / float(a) << endl;	// 1.75

	
	cout << -5 / 2 << endl;	// c++ 11부터는 뒤를 버림, -2.5 => -2 출력
	cout << -5 % 2 << endl;	// 나머지의 경우 왼쪽의 부호를 따라감

	int b = x;	// 대입 연산자
	b += a;	// == b = b + a;
	b -= a;	// == b = b - a;
	b *= a;	// == b = b * a;
	b /= a;	// == b = b / a;
	b %= a;	// == b = b % a;

	return 0;
}