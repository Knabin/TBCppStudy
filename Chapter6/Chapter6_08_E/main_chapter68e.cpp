#include <iostream>

using namespace std;

struct MyStruct
{
	int array[5] = { 9,7,5,3,1 };
};

void doSomething(MyStruct ms)
{
	cout << sizeof(ms.array) << endl;	// ���: 20
}

void doSomething(MyStruct *ms)
{
	cout << sizeof((*ms).array) << endl;	// ���: 20
}


int main()
{
	// array가 structure, class 안에 들어 있을 경우, 포인터로 강제 변환되지 않음
	MyStruct ms;
	cout << ms.array[0] << endl;
	cout << sizeof(ms.array) << endl;	// 출력: 20

	doSomething(ms);
	doSomething(&ms);

	return 0;
}