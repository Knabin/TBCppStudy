#include <iostream>
#include <iomanip>

/*
3.141592
31.41
0.001000
123.0002
0.0000000001
234560000.000
*/

int main()
{
	using namespace std;

	cout << 3.141592e0 << endl;
	cout << 3.141e1 << endl;
	cout << 1.0e-3 << endl;
	cout << 1.2300002e+2 << endl;
	cout << 1.0e-10 << endl;
	cout << 2.3456e+8 << endl;

	return 0;
}