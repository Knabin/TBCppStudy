#include <iostream>

using namespace std;

int* doSomething(int* ptr_a)
{
	return nullptr;
}

struct Something
{
	int a, b, c, d;	// 4 * 4bytes
};

int main()
{
	int x = 5;

	cout << x << endl;
	cout << &x << endl;	// &: address-of operator
	cout << (int)&x << endl;

	// de-reference operator (*)
	// reference: ���������� �����ϴ� ����
	// de-reference: �����Ͱ� �������� �ּҸ� ���������� ����Ű�� �ִ� �Ϳ� ���Ͽ�, �װ��� ���� �ִ��� ���� �����ϰڴٴ� �ǹ�

	cout << *(&x) << endl;	// == x
	cout << endl;

	// pointer: �޸� �ּҸ� ��� ����
	typedef int* pint;
	int *ptr_x = &x, *ptr_y = &x;
	//int *ptr_x = &x, ptr_y = &x;	// error!! ptr_y���� *�� �ٿ��� ��
	//pint ptr_x = &x, ptr_y = &x;	// ���������� typedef���ٴ� ���� �����ϱ�

	cout << ptr_x << endl;	// �������� �ּ�
	cout << *ptr_x << endl;	// �������� �ּҿ� �ִ� ����(������)

	cout << endl;

	// array�� parameter�� ������ ���� �����... => �����ͷ� ù ��° �ּҿ� ������ ������ �˷� �شٸ� �ذ� ����
	
	double d = 123.0;
	//int *ptr_i = &d;	// error!
	double *ptr_d = &d;

	cout << ptr_d << endl;
	cout << *ptr_d << endl;

	cout << typeid(ptr_x).name() << endl;	// ���: int *, gcc������ Pi ���


	// ������ ��ü�� ������� ����! �ּҴ� �׳� �ּ���!
	// ��, �����Ϳ��� Ÿ���� �ִ� ������ de-referencing�� ����
	// 64��Ʈ������ �ּҰ� �� ��
	cout << sizeof(x) << endl;	// ���: 4
	cout << sizeof(d) << endl;	// ���: 8
	cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;	// ���: 4 4
	cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;	// ���: 4 4
	
	cout << endl;

	Something ss;
	Something *ptr_s;

	cout << sizeof(Something) << endl;	// ���: 16
	cout << sizeof(ptr_s) << endl;		// ���: 4

	cout << endl;

	// �ʱ�ȭ �� �� ���¿��� ����ϸ� ������ ����
	int *ptr_a;
	cout << *ptr_a << endl;


	return 0;
}