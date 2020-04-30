#include <iostream>

using namespace std;

int main()
{
	const int value = 5;		// ������ const��
	const int *ptr = &value;	// �����͵� const
	//*ptr = 6;		error!
	//value = 6;	error!

	cout << *ptr << endl;	// ����� ��������


	int value2 = 5;
	const int *ptr2 = &value2;
	//*ptr2 = 6;	error!
	value2 = 6;

	cout << *ptr2 << endl;	// ����� ��������


	int v1 = 5;
	const int *p = &v1;	// const int *: ����Ű�� �ִ� �ּҿ� �ִ� '������'�� �ٲ��� �ʰڴ�!
	//*p = 10;		error!

	int v2 = 6;
	p = &v2;	// ����! 


	int v3 = 5;
	int *const p2 = &v3;	// int *const: ����Ű�� �ִ� '�޸� �ּ�'�� �ٲ��� �ʰڴ�!
	*p2 = 10;	// ����!

	int v4 = 8;
	//p2 = &v4;		error!


	const int *const p3 = &value;	// �ʱ�ȭ �ʿ�


	// �Լ� parameter���� ���� ���!
	int a = 5;
	const int *pt1 = &a;
	int *const pt2 = &a;		
	const int *const pt3 = &a;	

	return 0;
}