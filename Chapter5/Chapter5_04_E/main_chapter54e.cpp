#include <iostream>

int main()
{
	using namespace std;
	
	// error! transfer of control bypasses initialization of: variable "x"
	//goto skip;

	int x = 5;

skip:
	x += 3;

	return 0;
}