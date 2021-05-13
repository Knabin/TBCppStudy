#include <iostream>

using namespace std;

//void doSomething(int &n)
void doSomething(const int &n)	// 값 변경 불가
{
	//n = 10;
	cout << "In doSomething " << n << endl;
	cout << "In doSomething " << &n << endl;
}

int main()
{
	int value = 5;
	const int y = 8;

	int *ptr = nullptr;
	ptr = &value;

	int &ref = value;	// 참조, ref = value처럼 작동함
	//int &r;		error! reference는 반드시 초기화되어야 함
	//int &r = 104;	error! 리터럴은 메모리 주소가 없음
	//int &r = y;	error! 
	const int &r = y;	// const는 const로 선언

	cout << ref << endl;

	ref = 10;

	cout << value << " " << ref << endl;	// 출력: 10 10

	cout << &value << endl;
	cout << &ref << endl;	// value와 동일한 주소
	cout << ptr << endl;
	cout << &ptr << endl;


	int value1 = 5;
	int value2 = 10;

	int &ref1 = value1;

	cout << ref1 << endl;

	ref1 = value2;

	cout << ref1 << endl;


	int n = 5;
	cout << n << endl;
	cout << &n << endl;

	// 포인터는 복사해서 넣어 주는 것, 레퍼런스를 쓰게 되면 아예 변수 자체가 넘어감
	// 주소조차도 복사할 필요가 없기 때문에 효율이 더 높음
	doSomething(n);
	cout << n << endl;



	return 0;
}