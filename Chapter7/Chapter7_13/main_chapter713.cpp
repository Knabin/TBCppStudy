#include <iostream>
#include <string>

using namespace std;

int main()
{
	// syntax error
	//int x


	// semantic errors
	int x;
	cin >> x;

	if (x >= 5)	// x > 5
		cout << "x is greater than 5" << endl;


	// violated assumption
	string hello = "Hello, my name is Jack jack";

	/*
	int ix;
	cin >> ix;	// index보다 큰 수가 들어오면 런타임 에러!
	cout << hello[ix] << endl;
	*/

	cout << "Input from 0 to " << hello.size() - 1 << endl;

	while (true)
	{

		int ix;
		cin >> ix;	// index보다 큰 수가 들어오면 런타임 에러!

		if (ix >= 0 && ix <= hello.size() - 1)
		{
			cout << hello[ix] << endl;
			break;
		}
		else
			cout << "Please try again" << endl;
	}


	return 0;
}