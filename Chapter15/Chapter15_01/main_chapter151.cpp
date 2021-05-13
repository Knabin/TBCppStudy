#include <iostream>
#include "Resource.h"
#include "AutoPtr.h"

using namespace std;

// RAII : resource acquisition is initialization

void doSomething()
{
	try
	{
		//Resource *res = new Resource;			// dull pointer
		AutoPtr<Resource> res(new Resource);	// smart pointer

		return;	// early return인 경우에도 AutoPtr은 자동으로 지워짐

		// work with res
		if (true)
		{
			//return;	// early return, delete 불가능
			throw - 1;	// exception, delete 불가능
		}

		//delete res;
	}
	catch (...)
	{

	}
	return;
}

int main()
{
	doSomething();
	/*
	{
		AutoPtr<Resource> res1(new Resource);
		AutoPtr<Resource> res2;

		cout << std::boolalpha;

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;

		res2 = res1;

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;
	}*/

	return 0;
}
