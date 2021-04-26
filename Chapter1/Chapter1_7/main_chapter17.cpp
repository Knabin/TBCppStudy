#include <iostream>

using namespace std;

int main()
{
	int x = 0;
	// int x = 1; error!

	cout << x << " " << &x << endl;

	{
		// int x = 1;	// 새로운 변수 출력
		x = 1;		// 기존 변수 출력

		cout << x << " " << &x << endl;
	}

	cout << x << " " << &x << endl;

	{
		int x = 2;
	}

	return 0;
}