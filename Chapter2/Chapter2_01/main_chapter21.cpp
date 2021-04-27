#include <iostream>

int main()
{
	using namespace std;

	// 내부적으로 숫자로 저장한다. (1/0)
	bool bValue = false;

	cout << bValue << endl;
	
	// 내부적으로 숫자로 저장한다.
	char chValue = 'A';
	char chValue2 = 65;

	cout << chValue << ", " << chValue2 << endl;

	// f를 붙이지 않으면 double literal
	// float f = 1.1; => warning 'initializing': truncation from 'double' to 'float'
	float fValue = 3.141592f;
	double dValue = 3.141592;

	cout << fValue << endl;
	cout << dValue << endl;

	// auto : 빌드할 때 자동으로 자료형을 결정한다.
	auto aValue = 3.141592;
	auto aValue2 = 3.141592f;

	cout << aValue << endl;
	cout << aValue2 << endl;

	// sizeof(변수 or 자료형) : 해당 변수 or 자료형의 메모리 크기를 출력
	cout << sizeof(bool) << endl;
	cout << sizeof(bValue) << endl;

	// 변수 초기화 방법
	// 2,3은 객체지향 넘어가서 직접 만든 데이터 타입을 초기화할 때 많이 사용한다.
	// uniform initialization은 데이터 타입이 맞지 않는 경우, 에러를 발생시킨다.
	// 1,2는 warning 띄우고 처리하긴 해 준다.
	int a = (int)123.4;	// 1. copy initialization
	int b(int(123.4));		// 2. direct initialization	
	int c{ 123 };	// 3. uniform initialization

	// 같은 데이터 타입의 경우에만 연속적으로 선언 가능하다.
	// 우측의 변수만 초기화하는 것은 좋지 않다.
	int k = 0, l(123), m{ 456 };

	return 0;
}