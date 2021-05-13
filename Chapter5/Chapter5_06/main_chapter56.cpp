#include <iostream>

int main()
{
	using namespace std;

	int selection;	// must be declared outside do/while loop!!

	do
	{
		cout << "1. add" << endl;
		cout << "2. sub" << endl;
		cout << "3. mult" << endl;
		cout << "4. div" << endl;
		cin >> selection;
	} while (selection <= 0 || selection >= 5);
	// do-while 다음 semicolon 필수!!

	cout << "You selected " << selection << endl;

	return 0;
}