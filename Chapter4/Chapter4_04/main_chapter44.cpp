#include <iostream>

// �Ű��������� auto �Ұ���! => template
auto add(int x, int y) -> int	// �ڵ� ���� �� ���� ����, trailing return type
{
	return x + y;
}

int main()
{
	using namespace std;

	int a = 123;	// �ߺ��� ����: 123(����), int(������)

	auto b = 123;	// �翬�� ������� �ʱ�ȭ�� �� �ؾ� �Ѵ�!
	auto d = 123.0;
	auto c = 1 + 2.0;
	auto result = add(1, 2);

	return 0;
}