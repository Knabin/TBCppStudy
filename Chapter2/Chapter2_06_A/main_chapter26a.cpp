#include <iostream>
// ���� �ϳ��� �Է¹ް� �� ���ڰ� Ȧ������ ¦������ ����ϴ� ���α׷�
// ������ ������ ���

int main()
{
	using namespace std;
	
	int input_n = 0;
	cout << "������ �Է��ϼ���." << endl;
	cin >> input_n;

	if (input_n == 0) 
	{
		cout << "0�Դϴ�." << endl;
	}
	else if (input_n % 2 == 0) {
		// ¦�����
		cout << input_n << "�� ¦���Դϴ�." << endl;
	}
	else
	{
		// Ȧ�����
		cout << input_n << "�� Ȧ���Դϴ�." << endl;
	}

	return 0;
}