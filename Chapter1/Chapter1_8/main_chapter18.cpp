#include <iostream>

using namespace std;

int main()
{
	int x = 2;	// x is a variable, 2 is a literal. / assignment: =

	cout << x + 2 << endl;	// 피연산자(operand) : x, 2
	
	cout << -x << endl;	// 단항 연산자
	cout << 1 + 2 << endl;	// 이항 연산자
	
	int y = (x > 0) ? 1 : 2; 	// c++의 유일한 삼항 연산자, 조건 연산자
							 	// 괄호가 참이면 콜론 왼쪽, 거짓이면 오른쪽 값을 갖게 됨
	cout << y << endl;

	return 0;
}