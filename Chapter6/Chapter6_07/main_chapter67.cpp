#include <iostream>

using namespace std;

int* doSomething(int* ptr_a)
{
	return nullptr;
}

struct Something
{
	int a, b, c, d;	// 4 * 4bytes
};

int main()
{
	int x = 5;

	cout << x << endl;
	cout << &x << endl;	// &: address-of operator
	cout << (int)&x << endl;

	// de-reference operator (*)
	// reference: 간접적으로 참고하는 개념
	// de-reference: 포인터가 데이터의 주소를 간접적으로 가리키고 있는 것에 대하여, 그곳에 뭐가 있는지 직접 접근하겠다는 의미

	cout << *(&x) << endl;	// == x
	cout << endl;

	// pointer: 메모리 주소를 담는 변수
	typedef int* pint;
	int *ptr_x = &x, *ptr_y = &x;
	//int *ptr_x = &x, ptr_y = &x;	// error!! ptr_y에도 *을 붙여야 함
	//pint ptr_x = &x, ptr_y = &x;	// 가능하지만 typedef보다는 직접 선언하기

	cout << ptr_x << endl;	// 데이터의 주소
	cout << *ptr_x << endl;	// 데이터의 주소에 있는 내용(데이터)

	cout << endl;

	// array를 parameter로 넣으면 전부 복사됨... => 포인터로 첫 번째 주소와 데이터 개수만 알려 준다면 해결 가능
	
	double d = 123.0;
	//int *ptr_i = &d;	// error!
	double *ptr_d = &d;

	cout << ptr_d << endl;
	cout << *ptr_d << endl;

	cout << typeid(ptr_x).name() << endl;	// 출력: int *, gcc에서는 Pi 출력


	// 포인터 자체의 사이즈는 고정! 주소는 그냥 주소임!
	// 단, 포인터에도 타입이 있는 이유는 de-referencing을 위해
	// 64비트에서는 주소가 더 긺
	cout << sizeof(x) << endl;	// 출력: 4
	cout << sizeof(d) << endl;	// 출력: 8
	cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;	// 출력: 4 4
	cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;	// 출력: 4 4
	
	cout << endl;

	Something ss;
	Something *ptr_s;

	cout << sizeof(Something) << endl;	// 출력: 16
	cout << sizeof(ptr_s) << endl;		// 출력: 4

	cout << endl;

	// 초기화 안 된 상태에서 출력하면 엉뚱한 값임
	int *ptr_a;
	cout << *ptr_a << endl;


	return 0;
}