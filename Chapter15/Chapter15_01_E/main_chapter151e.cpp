#include <iostream>
#include "Resource.h"
#include "AutoPtr.h"

using namespace std;

int main()
{
	{
		AutoPtr<Resource> res1(new Resource);	// int i; int *ptr1(&i);
		AutoPtr<Resource> res2;					// int *ptr2 = nullptr;

		cout << std::boolalpha;

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;

		res2 = res1;	// move semantics

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;	// 이미 지워진 메모리를 다시 지우려고 함
	}

	// syntax					vs. semantics
	// 문법, 컴파일이 되는 거냐?	vs. 실제로 내부적인 의미가 뭐냐?
	int x = 1, y = 1;
	x + y;

	string str1("Hello"), str2("World");
	str1 + str2;	// 의미가 달라짐

	// doSomething(res1); 처럼
	// 넣었는데 어떻게 작동할지는 sementics에 따라 달라짐!

	// value semantics (copy semantics)
	// reference sementics (pointer)
	// move sementics (move)

	//AutoPtr<Resource> res1(new Resource);
	//doSomething(res1);
	// 이동해서 받으면 doSomething()이 끝나면서 res1이 소멸될 것임
	// 이러한 것들을 어떻게 처리할 거냐? => 스마트 포인터에서 중요한 부분!

	return 0;
}