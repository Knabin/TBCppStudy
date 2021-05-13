#include <iostream>

using namespace std;

//void printArray (int *array)	동일함!
void printArray(int array[])
{
	// parameter로 배열이 들어오는 것처럼 보이지만, 내부적으로는 포인터로 다룸
	cout << sizeof(array) << endl;	// 출력: 4
	cout << *array << endl;	// 출력: 9

	*array = 100;
}


int main()
{
	int array[5] = { 9,7,5,3,1 };

	// array는 배열이 아니라 '포인터', 첫 번째 방의 주소를 담고 있음
	cout << array[0] << " " << array[1] << endl;
	cout << array << endl;	// == &array[0]
	cout << &array[0] << endl;

	cout << *array << endl;	// 출력: 9

	// 문자형 포인터이기 때문에 직접 접근 시 문자형으로 출력함
	char name[] = "jackjack";
	cout << *name << endl;	// 출력: j


	int *ptr = array;
	cout << ptr << endl;	// == &array[0]
	cout << *ptr << endl;	// 출력: 9


	cout << sizeof(array) << endl;	// 출력: 20, 4*5
	cout << sizeof(ptr) << endl;	// 출력: 4, 포인터 변수의 size


	printArray(array);

	// printArray 함수 안에서 변경한 것을 main 함수에서도 확인 가능
	// C에서는 이러한 용도로 많이 사용하였음, C++은 reference를 사용
	cout << array[0] << " " << *array << endl;	// 출력: 100 100

	
	// 포인터 연산, 다음 항목 출력 가능
	cout << *ptr << " " << *(ptr + 1) << endl;	// 출력: 100 7


	return 0;
}