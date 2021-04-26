// 두 개의 정수를 입력받아서 더하고 출력하는 함수를 만들어 보자.
// 1. main 입력 + 반환하는 함수
// 2. main 입력 + 출력하는 함수
// 3. 입력받는 함수 + 출력하는 함수
// 4. 3번을 여러 번 반복되게끔

#include <iostream>

using namespace std;

int addTwoNumbersReturn(int num_a, int num_b)
{
	return num_a + num_b;
}

void addTwoNumbersPrint(int num_a, int num_b)
{
	cout << "입력한 정수: " << num_a << ", " << num_b << " / 덧셈 결과: " << addTwoNumbersReturn(num_a, num_b) << endl;
}

void addTwoNumbersAll()
{
	// 포인터 개념은 사용하지 않았다.
	int a, b;

	cout << "두 정수를 입력하세요." << endl;
	cin >> a >> b;
	addTwoNumbersPrint(a, b);
}

int main(void)
{
	int a = 0, b = 0;

	cout << "[1. main 입력 + 반환하는 함수]" << endl;
	cout << "두 정수를 입력하세요." << endl;
	cin >> a >> b;
	cout << "입력한 정수: " << a << ", " << b << " / 덧셈 결과: " << addTwoNumbersReturn(a, b) << endl;


	cout << "\n\n[2. main 입력 + 출력하는 함수]" << endl;
	cout << "두 정수를 입력하세요." << endl;
	cin >> a >> b;
	addTwoNumbersPrint(a, b);

	cout << "\n\n[3. 입력받는 함수 + 출력하는 함수]" << endl;
	addTwoNumbersAll();

	cout << "\n\n[4. 여러 번 반복하기]" << endl;
	// 반복문 개념은 사용하지 않았다.
	addTwoNumbersAll();
	addTwoNumbersAll();
	addTwoNumbersAll();

	return 0;
}