#include <iostream>
using namespace std;

int g_a = 1;
int value = 123;

// static duration variable ���� ���� ����, ����� �� �׽��ÿ�
// ���� a�� OS�κ��� ���� �޸𸮰� static��, �޸𸮰� �������� ����ȴ�
void doSomething()
{
	//int a = 1;	// �Լ� ���� �� ����ؼ� �Ҵ�ް� �ݳ���
	//static int a = 1;	// �Ҵ���� �޸𸮸� ����ؼ� ���, �ʱ�ȭ�� �� ����! ���� �ʱ�ȭ�� �ʼ�����
	++g_a;
	cout << g_a << endl;
}

int main()
{

	// ���� ���� 123 ���
	cout << value << endl;
	int value = 1;	// local variable, ���� ����� �޸� ��ȯ

	// ���� ���� 1 ���
	cout << value << endl;

	// global scope operator, ���� ���� ������
	cout << ::value << endl;

	doSomething();	// 2
	doSomething();	// 3
	doSomething();	// 4
	doSomething();	// 5

	return 0;
}