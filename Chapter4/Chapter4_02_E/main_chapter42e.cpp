#include <iostream>
#include "MyConstants.h"

using namespace std;

// static - �ٸ� cpp���� ���� �Ұ���!
//static int g_a = 1;

// forward declaration, (extern) void
void doSomething();
extern int a;

/*
	int g_x;	// external linkage
	static int g_x;	// internal linkage, �ٸ� ���Ͽ��� ���� �Ұ���
	const int g_x;	// X, const�� �ʱ�ȭ�� ���ÿ� �� ��� ��

	extern int g_z;
	extern const int g_x;	// extern�� const ����, �� ������ �ʱ�ȭ�� �� ��� ��

	int g_y(1);
	static int g_y(1);
	const int g_y(1);	// ���� ���� �ȿ����� ���� ����

	extern int g_w(1);
	extern const int g_w(1);	// ���, �ʱ�ȭO, �ܺ� ���� ����

	��������
	�⺻������ internal linkage, ���ǰ� �� ���� ������ ���� ��� ���ϰ� ��������ó�� ���
	���α׷��� ���������� ��� �����ߴ��� Ȯ���ϱⰡ ��Ʊ� ������ ������ ����

	���� ���� cpp ������ ���������� ����� �� �ִ� ��������, external linkage

	static ���� ���� ����, static duration variable
*/

int main()
{
	// test.cpp�� constants::pi�� �޸� �ּҰ� �ٸ�!! �޸� ����
	cout << "In main.cpp file " << Constants::pi << " " << &Constants::pi << endl;

	doSomething();

	return 0;
}