#include <iostream>

int main()
{
	using namespace std;

	// ���������� ���ڷ� �����Ѵ�. (1/0)
	bool bValue = false;

	cout << bValue << endl;
	
	// ���������� ���ڷ� �����Ѵ�.
	char chValue = 'A';
	char chValue2 = 65;

	cout << chValue << ", " << chValue2 << endl;

	// f�� ������ ������ double literal
	// float f = 1.1; => warning 'initializing': truncation from 'double' to 'float'
	float fValue = 3.141592f;
	double dValue = 3.141592;

	cout << fValue << endl;
	cout << dValue << endl;

	// auto: ������ �� �ڵ����� �ڷ����� �����Ѵ�.
	auto aValue = 3.141592;
	auto aValue2 = 3.141592f;

	cout << aValue << endl;
	cout << aValue2 << endl;

	// sizeof(����or�ڷ���): �ش� ����or�ڷ����� �޸� ũ�⸦ ���
	cout << sizeof(bool) << endl;
	cout << sizeof(bValue) << endl;

	// ���� �ʱ�ȭ ���
	// 2,3�� ��ü���� �Ѿ�� ���� ���� ������ Ÿ���� �ʱ�ȭ�� �� ���� �����
	// uniform initialization�� ������ Ÿ���� ���� �ʴ� ��� ���� �߻���Ŵ
	// 1,2�� warning ���� ó���ϱ� �� ��
	int a = (int)123.4;	// 1. copy initialization
	int b(int(123.4));		// 2. direct initialization	
	int c{ 123 };	// 3. uniform initialization

	// ���� ������ Ÿ���� ��쿡�� �������� ���� ����
	// ������ ������ �ʱ�ȭ�ϴ� ���� ���� ����
	int k = 0, l(123), m{ 456 };

	return 0;
}