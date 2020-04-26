#include <iostream>
using namespace std;

int getNumber()
{
	int tmp;
	while (true)
	{
		cin >> tmp;
		if (std::cin.fail())	// �������� ��� return true
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');	// ���� ����, 32767=������ ū ����
			cout << "��ȿ���� ���� �����Դϴ�. �ٽ� �Է��� �ּ���." << endl;
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return tmp;
		}
	}
}

int main(void)
{
	cout << "1. ������ ���" << endl;
	cout << "������ ���� �Է��� �ּ���: ";
	int start = getNumber();
	cout << "���� ���� �Է��� �ּ���: ";
	int end = getNumber();
	cout << endl;

	for (int i = start; i <= end; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			cout << i << " * " << j << " = " << i * j << "\t";
			if (j % 3 == 0) cout << endl;
		}
		cout << endl;
	}
	cout << endl;

	cout << "2. 1���� 20���� ¦���� ����ϱ�" << endl;
	for (int i = 1; i <= 20; i++)
	{
		if (i % 2 == 0) cout << i << "\t";
		if (i % 10 == 0) cout << endl;
	}
	cout << endl;

	cout << "3. 0���� 10���� ���ϱ�" << endl;
	int result = 0;
	for (int i = 1; i <= 10; i++)
	{
		result += i;

		if (i == 1) cout << i;
		else cout << " + " << i;
		if (i == 10) cout << " = " << result << endl;
	}

	return 0;
}
