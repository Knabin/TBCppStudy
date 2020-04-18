#include <iostream>

int main()
{
	using namespace std;

	int x = 5;
	int y = 7;

	if (x != y)	//!x == y => !x�� �켱������ �� ����, !(x == y)
	{
		cout << "x does not equal y" << endl;
	}
	else
		cout << "x equals y" << endl;


	int v = 1;

	if (v == 0 || v == 1)
		cout << "v is 0 or 1" << endl;


	// short circuit evaluation
	int a = 1;
	int b = 2;

	// AND�� ������ ���� ����� ��, false��� �������� ������� ����
	// ���� a�� 1�� �ƴ� ���, b�� ++ ó���� ���� �ʾ� ��������� 2�� ��µ�
	if (a == 1 && b++ == 2)
	{
		// do something
	}

	cout << b << endl;


	bool c = true;
	bool d = false;

	// De Morgan's Law
	!(c && d);	// == !c || !d;
	!c && !d;	// == !(c || d);

	// XOR: C++�� �������� ����
	// false false	> false
	// false true	> true
	// true false	> true
	// true true	> false

	if (c != d)	// c�� d�� bool Ÿ���̾�� ��
	{

	}


	bool v1 = true;
	bool v2 = false;
	bool v3 = false;

	// �켱����: && > || !!!
	// ��ȣ�� ġ�� ���� ������ ���ϴ�...
	bool r1 = v1 || v2 && v3;
	bool r2 = (v1 || v2) && v3;
	bool r3 = v1 || (v2 && v3);

	cout << r1 << endl;
	cout << r2 << endl;

	return 0;
}