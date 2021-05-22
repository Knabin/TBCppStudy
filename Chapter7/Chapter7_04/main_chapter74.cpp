#include <iostream>
using namespace std;

typedef int* pint;

//void foo(pint ptr)	주소라는 값을 값에 의한 전달한 것, 주소값이 복사가 됨! 포인터 변수도 변수다
void foo(int *ptr)
{
	cout << *ptr << " " << ptr << " " << &ptr << endl;

	//*ptr = 10;	// const int *ptr의 경우, error!
}

void foo2(double degrees, double *sin_out, double *cos_out)
{
	// 같은 변수가 넘어온 것이 아님! main 변수의 주소와 parameter의 주소는 다름
	// => 값에 의한 전달
	*sin_out = 1.0;
	*cos_out = 2.0;
}

void foo3(const int *ptr, int * const ptr2, int *arr, int length)
{
	for (int i = 0; i < length; i++)
		cout << arr[i] << endl;
	arr[0] = 1.0;	// 메모리 주소에 접근해서 값을 변경, []는 de-referencing
	//*ptr = 1.0;	// error!
	*ptr2 = 1.0;

	int x = 1;
	ptr = &x;	// 가능!
	//ptr2 = &x;	// error!
	// 구현하는 중간에 주소를 바꾸는 경우는 적음
}

int main()
{
	int value = 5;

	cout << value << " " << &value << endl;

	int *ptr = &value;

	foo(ptr);
	foo(&value);
	//foo(5);	// error! literal이라서 주소가 없음
	
	cout << &ptr << endl;	// 함수에서 찍은 것과 주소 다름!


	double degrees = 30;
	double sin, cos;

	foo2(degrees, &sin, &cos);	// 주소로 넣어 줘야 함

	cout << sin << " " << cos << endl;

	return 0;
}