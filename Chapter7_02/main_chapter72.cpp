#include <iostream>

using namespace std;

void doSomething(int y)
{
	// �Լ��� ȣ���� �� �Ű������� y�� �ʿ�� ��, ���������� int y�� ����ǰ� �ű⿡ 5��� ���� �����
	// �ּҰ� �ٸ��� ������ �Լ� �ȿ��� ���� ���� �ϴ��� main�� ������ �� �� ����
	cout << "In func " << y << " " << &y << endl;
}

int main()
{
	doSomething(5);

	int x = 6;

	cout << "In main " << x << " " << &x << endl;

	// x��� ������ �ƴϰ�, x �ȿ� �ִ� 6�̶�� value(��)�� argument�ν� parameter�� ����
	doSomething(x);
	doSomething(x + 1);

	return 0;
}