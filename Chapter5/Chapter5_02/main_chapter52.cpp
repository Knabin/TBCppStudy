#include <iostream>

int min(int x, int y)
{
	//if (x > y) return y;
	//else return x;
	return (x > y) ? y : x;
}

int main()
{
	using namespace std;

	int x;
	cin >> x;

	if (x > 10)
	{
		cout << x << " is greater than 10" << endl;
		cout << "Test 1" << endl;
	}
	else
		cout << x << " is not greater than 10" << endl;
	cout << "Test 1" << endl;	// else�� ����! block �ʿ�!


	if (1)	// 0�� �ƴϸ� true��!! ����
		int x = 5;	// if�� block�� ����� ���� ������� ����!!
	else
		int x = 6;

	cout << x << endl;


	if (x > 10)
		cout << "x is greater than 10" << endl;
	else if (x < 10)
		cout << "x is less than 10" << endl;
	else // if (x == 10)
		cout << "x is 10" << endl;

	
	if (x >= 10)
	{
		if (x >= 20)
			cout << "x is between 10 and 20" << endl;
		else
			cout << "..." << endl;
	}

	int y;
	cin >> y;

	if (x > 0 && y > 0)	// �� �� ���
		cout << "both numbers are positive" << endl;
	else if (x > 0 || y > 0)	// �� �߿� �ϳ��� ���
		cout << "one of the numbers is positive" << endl;
	else
		cout << "Neither number is positive" << endl;


	if (x > 10)
		cout << "A" << endl;
	else if (x == -1)
		return 0;	// ���α׷��� �ߴܽ�Ű�� �͵� ����
	else if (x < 0)
		cout << "B " << endl;


	// null statement ����!
	if (x > 10);
	{
		x = 1;
	}


	// x = 0; if(x)
	if (x = 0)	// if (x == 0) ����!
		cout << x << endl;

	return 0;
}