#include <iostream>

namespace MySpace1
{
	namespace InnerSpace
	{
		int my_function()
		{
			return 0;
		}
	}
	int doSomething(int a, int b)
	{
		return a + b;
	}
}

int doSomething(int a, int b)
{
	return a * b;
}

using namespace std;

int main()
{
	using namespace MySpace1::InnerSpace;

	cout << doSomething(3, 4) << endl;			// 3 * 4
	cout << MySpace1::doSomething(3, 4) << endl;// 3 + 4

	MySpace1::InnerSpace::my_function();

	return 0;
}