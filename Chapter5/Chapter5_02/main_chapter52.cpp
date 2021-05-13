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
	cout << "Test 1" << endl;	// else문 밖임! block 필요!


	if (1)	// 0이 아니면 true임!! 주의
		int x = 5;	// if문 block을 벗어나는 순간 사라짐에 주의!!
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

	if (x > 0 && y > 0)	// 둘 다 양수
		cout << "both numbers are positive" << endl;
	else if (x > 0 || y > 0)	// 둘 중에 하나만 양수
		cout << "one of the numbers is positive" << endl;
	else
		cout << "Neither number is positive" << endl;


	if (x > 10)
		cout << "A" << endl;
	else if (x == -1)
		return 0;	// 프로그램을 중단시키는 것도 가능
	else if (x < 0)
		cout << "B " << endl;


	// null statement 조심!
	if (x > 10);
	{
		x = 1;
	}


	// x = 0; if(x)
	if (x = 0)	// if (x == 0) 주의!
		cout << x << endl;

	return 0;
}