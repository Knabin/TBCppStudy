#include <iostream>

int main()
{
	using namespace std;

	int x = 7;
	int y = -x;	// -x: x�� sign ����
	int a = 4;
	int z = x % a;	// %: ������ ���

	// ���� �������� �Ǽ� ������, �� �� �ϳ��� �Ǽ����� ����� �Ǽ�!
	cout << x / a << endl;	// 1
	cout << float(x) / a << endl;	// 1.75
	cout << x / float(a) << endl;	// 1.75
	cout << float(x) / float(a) << endl;	// 1.75

	
	cout << -5 / 2 << endl;	// c++ 11���ʹ� �ڸ� ����, -2.5 => -2 ���
	cout << -5 % 2 << endl;	// �������� ��� ������ ��ȣ�� ����

	int b = x;	// ���� ������
	b += a;	// == b = b + a;
	b -= a;	// == b = b - a;
	b *= a;	// == b = b * a;
	b /= a;	// == b = b / a;
	b %= a;	// == b = b % a;

	return 0;
}