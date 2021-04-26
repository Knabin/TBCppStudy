#include <iostream>
#include <cmath>	//sqrt

int main()
{
	using namespace std;

	double x;

tryAgain : //label
	cout << "Enter a non-negative number" << endl;
	cin >> x;

	if (x < 0.0)
		goto tryAgain;


	cout << sqrt(x) << endl;

	return 0;
}