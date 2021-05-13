#include <iostream>
#include <cstddef>

using namespace std;

void doSomething(double *ptr)
{
	// parameter는 다시 선언이 되고, 값이 복사가 되는 형식임! 따라서 다른 main()과 주소 출력!
	cout << "address of pointer variable in doSomething() " << &ptr << endl;
	if (ptr != nullptr)
	{
		// do something useful
		cout << *ptr << endl;
	}
	else
	{
		// do nothing with ptr
		cout << "Null ptr, do nothing" << endl;
	}
}

int main()
{
	double *ptr = 0;	// c-style
	double *ptr2 = NULL;
	double *ptr3{ nullptr };	// modern C++
	double d = 123.4;

	doSomething(ptr);
	doSomething(nullptr);
	doSomething(&d);

	ptr = &d;

	doSomething(ptr);

	cout << "address of pointer variable in main() " << &ptr << endl;


	std::nullptr_t nptr;	// null pointer type, parameter로 널 포인터만 받아야 하는 경우 사용

	return 0;
}