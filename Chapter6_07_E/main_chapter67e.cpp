#include <iostream>
#include <cstddef>

using namespace std;

void doSomething(double *ptr)
{
	// parameter�� �ٽ� ������ �ǰ�, ���� ���簡 �Ǵ� ������! ���� �ٸ� main()�� �ּ� ���!
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


	std::nullptr_t nptr;	// null pointer type, parameter�� �� �����͸� �޾ƾ� �ϴ� ��� ���

	return 0;
}