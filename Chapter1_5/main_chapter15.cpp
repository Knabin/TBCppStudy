#include <iostream>

using namespace std;

// ��ȯ�� �Լ��̸�(�Ű�����,parameter)
// �Լ� �̸� ���� - �Լ� �̸� ��Ŭ�� Rename...
int multiplyTwoNumbers(int num_a, int num_b)
{
	// ������ ���� ������ �����ϰ� ���� ��, main �Լ��� �ƴ϶�
	// �ش� �Լ��� �ڵ常 �����ϸ� �ȴ�.
	// ex) int sum = num_a - num_b;
	int sum = num_a * num_b;

	return sum;
}

// return �� ���� ���� ������ ��ȯ���� void
void printHelloWorld()
{
	cout << "Hello World " << endl;

	return; // return�� ������ ������ ��ȯ�ؼ� main �Լ��� ���ư���.

	cout << "Hello World 2" << endl;
}

void print()
{
	cout << "Hello" << endl;
}

int addTwoNumbers(int a, int b)
{
	/*
	cpp�� �Լ� �ȿ��� �Լ��� ������ �� ����.
	void print()
	{
		cout << "Hello" << endl;
	}
	*/
	print();
	return a + b;
}

int main()
{
	/*
	���� �� ���� ���ϰ� �� ����� ����ϴ� ������ �ݺ��ǰ� �ִ�.
	cout << 1 + 2 << endl;
	cout << 3 + 4 << endl;
	cout << 8 + 13 << endl;
	*/

	// �Լ��̸�(�μ�,argument)
	cout << multiplyTwoNumbers(1, 2) << endl;
	cout << multiplyTwoNumbers(3, 4) << endl;
	cout << multiplyTwoNumbers(8, 13) << endl;

	printHelloWorld();

	int sum = addTwoNumbers(1, 2);

	return 0;
}