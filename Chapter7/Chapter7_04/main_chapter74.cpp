#include <iostream>
using namespace std;

typedef int* pint;

//void foo(pint ptr)	�ּҶ�� ���� ���� ���� ������ ��, �ּҰ��� ���簡 ��! ������ ������ ������
void foo(int *ptr)
{
	cout << *ptr << " " << ptr << " " << &ptr << endl;

	//*ptr = 10;	// const int *ptr�� ���, error!
}

void foo2(double degrees, double *sin_out, double *cos_out)
{
	// ���� ������ �Ѿ�� ���� �ƴ�! main ������ �ּҿ� parameter�� �ּҴ� �ٸ�
	// => ���� ���� ����
	*sin_out = 1.0;
	*cos_out = 2.0;
}

void foo3(const int *ptr, int * const ptr2, int *arr, int length)
{
	for (int i = 0; i < length; i++)
		cout << arr[i] << endl;
	arr[0] = 1.0;	// �޸� �ּҿ� �����ؼ� ���� ����, []�� de-referencing
	//*ptr = 1.0;	// error!
	*ptr2 = 1.0;

	int x = 1;
	ptr = &x;	// ����!
	//ptr2 = &x;	// error!
	// �����ϴ� �߰��� �ּҸ� �ٲٴ� ���� ����
}

int main()
{
	int value = 5;

	cout << value << " " << &value << endl;

	int *ptr = &value;

	foo(ptr);
	foo(&value);
	//foo(5);	// error! literal�̶� �ּҰ� ����
	
	cout << &ptr << endl;	// �Լ����� ���� �Ͱ� �ּ� �ٸ�!


	double degrees = 30;
	double sin, cos;

	foo2(degrees, &sin, &cos);	// �ּҷ� �־� ��� ��

	cout << sin << " " << cos << endl;

	return 0;
}