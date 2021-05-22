#include <iostream>
using namespace std;

inline int min(int x, int y)
{
	return x > y ? y : x;
}

int main()
{
	// 프로그램 실행 시, 함수를 가져오고 변수 x,y를 선언하고 계산 후 return 받아서 출력하는 과정을 겪음
	// 짧은데 자주 사용되는 함수의 경우, 이러한 과정을 줄이기 위해 인라인 함수를 사용하기도 함(주로 헤더파일)
	cout << min(5, 6) << endl;
	cout << min(3, 2) << endl;

	// 다음과 같이 작동함
	cout << (5 > 6 ? 6 : 5) << endl;
	cout << (3 > 2 ? 2 : 3) << endl;

	// inline: 강제로 이 함수를 인라인으로 해라!(X) 이렇게 할 수 있으면 해 주세요(O)
	// 요즘 컴파일러들이 자동으로 inline 처리 해 주기도 한다
	// 인라인 함수가 엄청 많고, 컴파일러가 모두 인라인 처리한다면 프로그램이 커짐!

	return 0;
}