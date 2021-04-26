#include <iostream>
#include <typeinfo>
#include <iomanip>

int main()
{
	using namespace std;

	int a = 123;
	int b = 123.0;	// ���� �߳�, ������ ������
	int bb = (int)123.0;	// ����� ����ȯ

	// ��� data type���� ���, auto�� ����ȯ���� �����ϰ� ���
	cout << typeid(4.0).name() << endl;
	cout << typeid(a).name() << endl;


	// numeric promotion: ���� �� -> ū ��, ū ������ ����
	float f = 1.0f;
	double d = f;

	// numeric conversion(��ȯ)
	double d2 = 3;
	short s = 2;

	int i = 30000;
	char c = i;	// char ������ �� ��

	int i2 = 2;
	char c2 = i2;	// char ������ ���� ������ ���� ����

	// char�� ����ϸ� ���ڷ� ��µǱ� ������ ����� ����ȯ �ʿ�
	cout << static_cast<int>(c) << endl;	// ���: 48
	cout << static_cast<int>(c2) << endl;	// ���: 2


	double d3 = 0.123456789;
	float f2 = d3;	// ���е��� �����ؼ� �Ϻ��ϰ� ��������� ����

	cout << std::setprecision(12) << d3 << endl;	// ���: 0.123456789
	cout << std::setprecision(12) << f2 << endl;	// ���: 0.123456791043


	int i3 = 1234;
	float f3 = i;

	cout << std::setprecision(12) << f3 << endl;	// ���: 1234.0


	float f4 = 3.14;
	int i4 = f4;	// �Ҽ��� "����" / �ݿø�, �ø�, ������ �Լ��� ���� ����

	cout << i4 << endl;	// ���: 3


	// unsigned <-> signed�� ������ ���� �� ������ ������ �ٷ�� ��
	cout << 5u - 10 << endl;
	cout << 5u - 10u << endl;

	// �켱����: int < unsigned int < long < unsigned long <
	//       long long < unsigned long long < float < double < long double


	// �Ͻ��� ����ȯ
	int x = (int)4.0;	// c style
	int y = int(4.0);	// cpp style, int Ÿ���� instance�� ����� ����
	int z = static_cast<int>(4.0);	// �ֱ�


	return 0;
}