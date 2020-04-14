#include <iostream>

void doSomething()
{
	using namespace std;

#ifdef LIKE_APPLE
	cout << "Apple " << endl;
#else
	cout << "Orange " << endl;
#endif // !LIKE_APPLE
}