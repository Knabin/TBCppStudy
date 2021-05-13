#include <iostream>

using namespace std;

int main()
{
	const int value = 5;		// 변수가 const면
	const int *ptr = &value;	// 포인터도 const
	//*ptr = 6;		error!
	//value = 6;	error!

	cout << *ptr << endl;	// 출력은 문제없음


	int value2 = 5;
	const int *ptr2 = &value2;
	//*ptr2 = 6;	error!
	value2 = 6;

	cout << *ptr2 << endl;	// 출력은 문제없음


	int v1 = 5;
	const int *p = &v1;	// const int *: 가리키고 있는 주소에 있는 '데이터'를 바꾸지 않겠다!
	//*p = 10;		error!

	int v2 = 6;
	p = &v2;	// 가능! 


	int v3 = 5;
	int *const p2 = &v3;	// int *const: 가리키고 있는 '메모리 주소'를 바꾸지 않겠다!
	*p2 = 10;	// 가능!

	int v4 = 8;
	//p2 = &v4;		error!


	const int *const p3 = &value;	// 초기화 필요


	// 함수 parameter에서 종종 사용!
	int a = 5;
	const int *pt1 = &a;
	int *const pt2 = &a;		
	const int *const pt3 = &a;	

	return 0;
}