// �� ���� ������ �Է¹޾Ƽ� ���ϰ� ����ϴ� �Լ��� ����� ����.
// 1. main �Է� + ��ȯ�ϴ� �Լ�
// 2. main �Է� + ����ϴ� �Լ�
// 3. �Է¹޴� �Լ� + ����ϴ� �Լ�
// 4. 3���� ���� �� �ݺ��ǰԲ�

#include <iostream>

using namespace std;

int addTwoNumbersReturn(int num_a, int num_b)
{
	return num_a + num_b;
}

void addTwoNumbersPrint(int num_a, int num_b)
{
	cout << "�Է��� ����: " << num_a << ", " << num_b << " / ���� ���: " << addTwoNumbersReturn(num_a, num_b) << endl;
}

void addTwoNumbersAll()
{
	// ������ ������ ������� �ʾҴ�.
	int a, b;

	cout << "�� ������ �Է��ϼ���." << endl;
	cin >> a >> b;
	addTwoNumbersPrint(a, b);
}

int main(void)
{
	int a = 0, b = 0;

	cout << "[1. main �Է� + ��ȯ�ϴ� �Լ�]" << endl;
	cout << "�� ������ �Է��ϼ���." << endl;
	cin >> a >> b;
	cout << "�Է��� ����: " << a << ", " << b << " / ���� ���: " << addTwoNumbersReturn(a, b) << endl;


	cout << "\n\n[2. main �Է� + ����ϴ� �Լ�]" << endl;
	cout << "�� ������ �Է��ϼ���." << endl;
	cin >> a >> b;
	addTwoNumbersPrint(a, b);

	cout << "\n\n[3. �Է¹޴� �Լ� + ����ϴ� �Լ�]" << endl;
	addTwoNumbersAll();

	cout << "\n\n[4. ���� �� �ݺ��ϱ�]" << endl;
	// �ݺ��� ������ ������� �ʾҴ�.
	addTwoNumbersAll();
	addTwoNumbersAll();
	addTwoNumbersAll();

	return 0;
}