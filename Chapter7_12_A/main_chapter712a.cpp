#include <iostream>
using namespace std;

// 0 1 2 3 5 8 13 21 ... fibo

int fibo(int num)
{
	if (num == 0) return 0;
	else if (num == 1) return 1;
	else return fibo(num - 1) + fibo(num - 2);
}

int main()
{
	int num;

	for (int i = 0; i <= 20; i++)
	{
		cout << fibo(i) << endl;
	}

	return 0;
}