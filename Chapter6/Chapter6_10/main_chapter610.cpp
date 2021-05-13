#include <iostream>

using namespace std;

// return type 가능
const char* getName()
{
	return "Jack Jack";
}

int main()
{
	//char name[] = "Jack Jack";
	//char *name = "Jack Jack";	error!! 실제로 "Jack Jack"이 담길 메모리에 대한 정보가 없음
	const char *name = "Jack Jack";	// 가능
	const char *name2 = getName();
	const char *name3 = "Jack Jack2";

	cout << uintptr_t(name) << endl;
	cout << uintptr_t(name2) << endl;	// 동일한 메모리 사용
	cout << uintptr_t(name3) << endl;	// 다른 메모리 사용


	int int_arr[5] = { 1,2,3,4,5 };
	char char_arr[] = "Hello, World!";

	// cout에서 문자열은 특별하게 처리함! 문자의 포인터가 들어오면 문자의 배열일 가능성이 높다고 판단
	cout << int_arr << endl;	// 출력: 주소
	cout << char_arr << endl;	// 출력: Hello, World!
	cout << name << endl;		// 출력: Jack Jack

	char c = 'Q';
	// 메모리 주소가 들어가니까 문자열이라고 생각하기 때문에, null이 나올 때까지 쭉 출력함!
	cout << &c << endl;	

	return 0;
}