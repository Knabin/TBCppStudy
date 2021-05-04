#include <iostream>
using namespace std;

int g_a = 1;
int value = 123;

// static duration variable 정적 지속 변수, 디버깅 및 테스팅용
// 변수 a가 OS로부터 받은 메모리가 static임, 메모리가 정적으로 선언된다
void doSomething()
{
	//int a = 1;	// 함수 선언 시 계속해서 할당받고 반납함
	//static int a = 1;	// 할당받은 메모리를 계속해서 사용, 초기화는 한 번만! 따라서 초기화는 필수적임
	++g_a;
	cout << g_a << endl;
}

int main()
{

	// 전역 변수 123 출력
	cout << value << endl;
	int value = 1;	// local variable, 블럭을 벗어나면 메모리 반환

	// 지역 변수 1 출력
	cout << value << endl;

	// global scope operator, 전역 변수 연산자
	cout << ::value << endl;

	doSomething();	// 2
	doSomething();	// 3
	doSomething();	// 4
	doSomething();	// 5

	return 0;
}