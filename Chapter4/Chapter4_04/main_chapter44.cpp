#include <iostream>

// 매개변수에는 auto 불가능! => template
auto add(int x, int y) -> int	// 코드 정리 시 보기 좋음, trailing return type
{
	return x + y;
}

int main()
{
	using namespace std;

	int a = 123;	// 중복된 정보: 123(정수), int(정수형)

	auto b = 123;	// 당연한 얘기지만 초기화를 꼭 해야 한다!
	auto d = 123.0;
	auto c = 1 + 2.0;
	auto result = add(1, 2);

	return 0;
}