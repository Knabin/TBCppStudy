#include <iostream>

using namespace std;

int foo(int x, int y);

// parameter: �Լ��� � ����� �ϴ���, �ٲ� �ִ� ����
int foo(int x, int y)
{
	// like... int x, y;
	return x + y;
} // x and y are destroyed here, �Լ��� ������ ���ÿ� �Ҹ��

int main()
{
	int x = 1, y = 2;

	foo(6, 7);	// 6, 7: arguments (actual parameters)
	foo(x, y + 1);	// x�� �ִ� ���� argument��, �Լ��� parameter�� ����
	// �׻� x�� �ִ� ���� ���޵Ǵ� ���� �ƴϴ�? (��, ����, �ּҿ� ���� ����)

	return 0;
}