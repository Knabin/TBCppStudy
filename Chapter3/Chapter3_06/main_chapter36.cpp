#include <iostream>

int main()
{
	using namespace std;

	// logical NOT !x
	bool x = true;

	cout << !x << endl;


	// logical AND &&
	bool a = true;
	bool b = false;

	cout << (a && b) << endl;


	bool hit = true;
	int health = 10;

	if (hit == true && health < 20)
	{
		cout << "die" << endl;
	}
	else
		health -= 20;


	// logical OR ||
	cout << (a || b) << endl;


	return 0;
}