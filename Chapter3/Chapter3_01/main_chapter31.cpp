#include <iostream>
#include <cmath>

int main()
{
	using namespace std;

	// 수식이 들어오면 어느 쪽을 먼저 계산할지 결정한다.
	// 필요한 경우 괄호를 사용해서 우선순위를 명확하게 남기자.
	int x = 4 + 2 * 3;	// * 먼저
	int y = 3 * 4 / 2;	// *와 /는 우선순위가 같음, Associativity

	int z = std::pow(2, 3);	// 2의 세제곱
	cout << z << endl;

	return 0;
}