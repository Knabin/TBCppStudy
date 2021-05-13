#include <iostream>
#include <cstdlib>	// exit

int main()
{
	using namespace std;

	cout << "I love you " << endl;
	
	exit(0);	// 코드 어디에 있든 긴급하게 종료 가능
	return 0;	// return 타입에 맞춰서 return해 줘야 함

	cout << "I love you, too" << endl;

	return 0;
}