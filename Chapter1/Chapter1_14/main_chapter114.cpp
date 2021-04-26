#include <iostream>
#include <algorithm>

using namespace std;

// MY_NUMBER를 만나면 9로 교체하라.
#define MY_NUMBER 9
#define MAX(a, b) (((a)>(b)) ? (a) : (b))
#define LIKE_APPLE

void doSomething();

int main()
{
	cout << MY_NUMBER << endl;
	cout << MAX(1 + 3, 2) << endl;
	cout << std::max(1 + 3, 2) << endl;

	// 빌드 들어가기 전에 결정해 버린다.
	// 주로 멀티플랫폼 프로그램, 그래픽 카드 사양 등 체크할 때 사용한다.
	// 전처리기 라인에서는 교체하지 않는다.
	/*
#ifdef LIKE_APPLE
	cout << "Apple " << endl;
#else
	cout << "Orange " << endl;
#endif // !LIKE_APPLE
*/

	// define은 해당 파일 안에서만 적용된다!
	doSomething();

	return 0;
}