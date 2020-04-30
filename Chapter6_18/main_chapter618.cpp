#include <iostream>

using namespace std;

enum Type
{
	INT,
	FLOAT,
	CHAR
};

int main()
{
	// void pointer, generic(������) pointer

	int i = 5;
	float f = 3.0;
	char c = 'a';

	void *ptr = nullptr;

	// �ּ� �ִ� ���� ���� ����! ��, �׷��� ������ � Ÿ������ �� ���� ������
	ptr = &i;
	ptr = &f;
	//ptr = &c;

	int *ptr_i = &i;

	cout << ptr_i << endl;
	cout << ptr_i + 1 << endl;

	cout << &f << " " << ptr << endl;	// '�ּ�' ��� ����
	//cout << *ptr << endl;	// error! �ּҿ� ���� �ִ� �� �˰�����, � ������ �� �� ����!
	cout << *static_cast<float*>(ptr) << endl;

	//cout << ptr + 1 << endl;	// error! ��ü �� ����Ʈ�� ���ؾ� �ϴ��� �� �� ����!


	// void pointer�� ���� ������� �ʰ�����... �����͸� �����ϴ� �� ������ ��
	Type type = FLOAT;
	if (type == FLOAT)
		cout << *static_cast<float*>(ptr) << endl;
	else if(type == INT)
		cout << *static_cast<int*>(ptr) << endl;

	return 0;
}