#include <iostream>

using namespace std;

int main()
{
	// 정적으로 할당하는 것들은 stack에 할당, 동적은 heap
	//int array[1000000];	// error!! Stack overflow 

	//int var;
	//var = 7;
	int *ptr = new int(7);	// new int: int에 맞춰서 메모리를 받아오고, 그 주소를 알려줌
	//		   new int { 7 };
	*ptr = 7;

	cout << ptr << endl;
	cout << *ptr << endl;

	// 중요!! 할당받은 메모리를 다시 돌려 줌
	// OS가 메모리를 기억하고 있기 때문에 프로그램이 종료되면 자동으로 회수함
	// delete는 OS가 가져가기 전에 먼저 수동으로 반납하는 것임!
	delete ptr;
	ptr = NULL;	// 해제 후 NULL, 0, nullptr 넣어 주기

	// 삭제를 하더라도 주소는 그대로 남아 있음, 알고 있던 집으로 갔더니 다른 주소더라
	cout << "After delete" << endl;
	if(ptr != nullptr)
	{ 
		cout << ptr << endl;
		cout << *ptr << endl;
	}

	// 다른 프로그램이 모두 메모리를 사용하고 있어서 할당받지 못할 때가 있음
	// 프로그램이 죽지 않게 짜려면... std::nothrow => 오류를 발생시키지 않고 실행함
	int *ptr2 = new (std::nothrow) int{ 7 };

	if (ptr2)
	{
		cout << ptr2 << endl;
		cout << *ptr2 << endl;
	}
	else
	{
		cout << "Could not allocate memory" << endl;
	}


	int *ptr3 = ptr2;

	delete ptr2;
	ptr2 = nullptr;
	ptr3 = nullptr;	// ptr3 해제하지 않고 *ptr3 접근하면 오류 발생!!


	// memory leak 메모리 누수
	// 1. 할당하는 메모리가 큰 경우, 작업 관리자 확인
	// 2. debugger의 Diagnostic Tools 확인
	// new와 delete는 OS에 다녀와야 하기 때문에 느림 => 적게 사용하는 것이 좋음
	while (true)
	{
		int *ptr = new int;
		cout << ptr << endl;

		delete ptr;
	}
	

	return 0;
}