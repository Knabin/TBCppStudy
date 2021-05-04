#include <iostream>
#include "MyConstants.h"

using namespace std;

// static - 다른 cpp에서 접근 불가능!
//static int g_a = 1;

// forward declaration, (extern) void
void doSomething();
extern int a;

/*
	int g_x;	// external linkage
	static int g_x;	// internal linkage, 다른 파일에서 접근 불가능
	const int g_x;	// X, const는 초기화를 동시에 해 줘야 함
	extern int g_z;
	extern const int g_x;	// extern은 const 가능, 한 군데서 초기화를 해 줘야 함
	int g_y(1);
	static int g_y(1);
	const int g_y(1);	// 같은 파일 안에서만 접근 가능
	extern int g_w(1);
	extern const int g_w(1);	// 상수, 초기화O, 외부 접근 가능
	전역변수
	기본적으로 internal linkage, 정의가 된 파일 내에서 사용될 경우 편하게 지역변수처럼 사용
	프로그램이 복잡해지면 어디서 수정했는지 확인하기가 어렵기 때문에 단점이 많음
	여러 개의 cpp 파일이 공통적으로 사용할 수 있는 전역변수, external linkage
	static 정적 지속 변수, static duration variable
*/

int main()
{
	// test.cpp의 constants::pi와 메모리 주소가 다름!! 메모리 낭비
	cout << "In main.cpp file " << Constants::pi << " " << &Constants::pi << endl;

	doSomething();

	return 0;
}