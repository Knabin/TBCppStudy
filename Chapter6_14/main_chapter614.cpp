#include <iostream>

using namespace std;

//void doSomething(int &n)
void doSomething(const int &n)	// �� ���� �Ұ�
{
	//n = 10;
	cout << "In doSomething " << n << endl;
	cout << "In doSomething " << &n << endl;
}

int main()
{
	int value = 5;
	const int y = 8;

	int *ptr = nullptr;
	ptr = &value;

	int &ref = value;	// ����, ref = valueó�� �۵���
	//int &r;		error! reference�� �ݵ�� �ʱ�ȭ�Ǿ�� ��
	//int &r = 104;	error! ���ͷ��� �޸� �ּҰ� ����
	//int &r = y;	error! 
	const int &r = y;	// const�� const�� ����

	cout << ref << endl;

	ref = 10;

	cout << value << " " << ref << endl;	// ���: 10 10

	cout << &value << endl;
	cout << &ref << endl;	// value�� ������ �ּ�
	cout << ptr << endl;
	cout << &ptr << endl;


	int value1 = 5;
	int value2 = 10;

	int &ref1 = value1;

	cout << ref1 << endl;

	ref1 = value2;

	cout << ref1 << endl;


	int n = 5;
	cout << n << endl;
	cout << &n << endl;

	// �����ʹ� �����ؼ� �־� �ִ� ��, ���۷����� ���� �Ǹ� �ƿ� ���� ��ü�� �Ѿ
	// �ּ������� ������ �ʿ䰡 ���� ������ ȿ���� �� ����
	doSomething(n);
	cout << n << endl;



	return 0;
}