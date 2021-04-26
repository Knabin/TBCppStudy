#include <iostream>
// while���� break�� ����ؼ� ���ڿ��� ���, �������� �� ĳ���ʹ� ������� �ʰԲ�
// ����Ʈ ���� ��� ++ptr

using namespace std;

void printArray(char *arr)
{
	char *ptr = arr;
	while (true)
	{
		cout << *ptr << endl;
		if (*(++ptr) == '\0')
			return;
	}
}

int main()
{
	const int MAX = 100;
	char array[MAX];

	cout << "���ڿ��� �Է��� �ּ���." << endl;
	while (true)
	{
		cin.getline(array, MAX);
		if (!cin.fail())
			break;
		cin.clear();
		cin.ignore(MAX, '\n');
	}

	printArray(array);

	return 0;
}