#include <iostream>

using namespace std;

int main()
{
	int x = 0;
	// int x = 1; error!

	cout << x << " " << &x << endl;

	{
		// int x = 1;	// ���ο� ���� ���
		x = 1;			// ���� ���� ���

		cout << x << " " << &x << endl;
	}

	cout << x << " " << &x << endl;

	{
		int x = 2;
	}

	return 0;
}