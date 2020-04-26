#include <iostream>
using namespace std;

void breakOrReturn()
{
	while (true)
	{
		char ch;
		cin >> ch;

		if (ch == 'b')
			break;

		if (ch == 'r')
			return;
	}

	// break�� Hello ��� / return�� �Լ� Ż��
	cout << "Hello" << endl;
}

int main()
{
	int count = 0;
	while (true)
	{
		cout << count << endl;
		if (count == 2) break;	// ���� ������ ��������
		count++; 
	}

	breakOrReturn();

	for (int i = 0; i < 10; i++)
	{
		//if (i % 2 == 1) cout << i << endl;
		
		// continue�� �Ʒ��κ��� �������� �ʰ� for���� i++ ����
		if (i % 2 == 0) continue;

		cout << i << endl;
	}


	int count2(0);
	do
	{
		if (count2 == 5)
			continue;

		cout << count2 << endl;
	} while (++count2 < 10);

	/*
	�̷��� �ڵ��ϸ� count2==5�� ���, continue�� ���� count2++�� ���� X(���ѷ���)
	while���̳� do-while���� for������ ���� ��ٷο� �� ����

	do
	{
		if (count2 == 5)
			continue;

		cout << count2 << endl;
		count2++;
	} while (count2 < 10);
	*/


	// break�� ���Ǻ��� ���� ���
	// flag ���
	int count3(0);
	bool escape_flag = false;

	while (!escape_flag)
	{
		// ����� ���� ���� ���� ����ϸ� ������ �� ����, ������ ���� �� ����
		char ch;
		cin >> ch;

		cout << ch << " " << count3++ << endl;

		if (ch == 'x')
			escape_flag = true;
	}
	
	int count4(0);

	// break ���
	while (true)
	{
		char ch;
		cin >> ch;

		cout << ch << " " << count4++ << endl;

		if (ch == 'x')
			break;
	}

	return 0;
}