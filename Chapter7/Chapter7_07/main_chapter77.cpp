#include <iostream>
#include <string>
using namespace std;

int addInt(int x, int y)
{
	return x + y;
}

int addDouble(double x, double y)
{
	return x + y;
}

// 함수 오버로딩!
int add(int x, int y)
{
	return x + y;
}

double add(double x, double y)
{
	return x + y;
}

/*
error! return 타입만이 다르다면 오버로딩 불가능!
int add(double x, double y)
{
	return x + y;
}
*/

// 매개변수로 값을 돌려받는 방법
void getRandom(int &x) {}
void getRandom(double &x) {}

typedef int my_int;

// 같은 타입으로 인식됨! error C2084: function 'void print(int)' already has a body
void print1(int x) {}
void print1(my_int x) {}

void print2(char *value) {}
void print2(int value) {}
void print2(const char *value) {}	// "a" 예제 해결!

void print3(unsigned int value) {}
void print3(float value) {}

int main()
{
	addInt(1, 2);
	addDouble(1.0, 2.0);
	// int인지 double인지 신경 쓰고 싶지 않아 => 매개변수는 다르지만 작동이 같은 경우, 오버로딩 사용

	add(1, 2);
	add(3.0, 4.0);

	// 이름이 같아도 매개변수가 다르면 다른 함수로 동작함
	// 주어진 인자와 가장 잘 맞는 매개변수인 함수를 찾아서 실행함
	// 따라서 여기서 어떤 add를 사용할지 '컴파일 타임'에 결정되어야 함

	int x;
	getRandom(x);	// 입력인지, 함수에 값만 전달하는지 헷갈림

	// int x = getRandomInt(x);	// return type int인 경우
	// int x = getRandom(int());


	print2(0);		// print(int)
	print2('a');	// print(int)
	//print2("a");	// error!


	// error C2668: 'print3': ambiguous call to overloaded function
	//print3('a');
	//print3(0);
	//print3(3.141592);

	// 의도대로 명확하게 적으면 모호성을 제거할 수 있음! => 애초에 오버로딩할 때 명확하게 구현하기
	// 이름으로 구분하는 게 억지로 사용하는 것보다 좋은 경우도 있음, 주석 달기
	print3((unsigned int)'a');
	print3(0u);
	print3(3.141592f);
	

	return 0;
}