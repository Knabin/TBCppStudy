#include <iostream>

int main()
{
	using namespace std;

	//cout << 1 << endl;
	//cout << 2 << endl;
	// ...
	//cout << 9 << endl;

	cout << "While-loop test" << endl;

	int count = 0;	// �� �� ���� ����
	while (1)	// ��ȣ�� true(0�� �ƴ�)�� ��� �ݺ�
	{
		//int count = 0;	// ���⿡ �����ؼ� ����ϸ� ��� 0�� ��µ�, static ���̸� OK
		cout << count << endl;
		++count;

		if (count >= 10) break;
	}

	// unsigned int�� ����ϸ� ������ ���� �� �ִ�! 10 9 ... 1 0 4294967295
	// unsigned�� signed���� ���� �� ���� ������ ��! ������� ����� ���� �ƴϴ�
	unsigned int count_u = 10;
	/*
	while (count_u >= 0)
	{
		if (count_u == 0) cout << "Zero";
		else cout << count_u << " ";

		count_u--;
	}
	*/

	count = 1;

	while (count < 100)
	{
		if (count % 5 == 0) cout << "Hello " << count << endl;

		count++;
	}


	int outer_count = 1;
	while (outer_count <= 5)
	{
		int inner_count = 1;
		while (inner_count <= outer_count)
		{
			cout << inner_count++ << " ";
		}
		cout << endl;
		++outer_count;
	}

	return 0;
}