#include <iostream>
//ASCII ǥ�� �ִ� �������� ���ڵ��� cin/cout���� �����

int main()
{
	using namespace std;

	char input_c = ' ';
	char star_c = '*';
	char num_c = 47;

	cout << num_c << star_c << "���ڸ� �Է��ϼ���." << star_c << num_c << endl;
	cin >> input_c;
	cout << "�Է��Ͻ� ����: " << input_c << endl;

	int input_i = 0;
	cout << "\n" << num_c << star_c << "����(0-127)�� �Է��ϼ���." << star_c << num_c << endl;
	cin >> input_i;
	cout << "�Է��Ͻ� ����: " << static_cast<char>(input_i) << endl;

	return 0;
}