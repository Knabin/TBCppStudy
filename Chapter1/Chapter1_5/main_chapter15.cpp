#include <iostream>

using namespace std;

// 반환형 함수이름(매개변수, parameter)
// 함수 이름 변경 - 함수 이름 우클릭 Rename...
int multiplyTwoNumbers(int num_a, int num_b)
{
	// 덧셈을 곱셈 등으로 변경하고 싶을 때, main 함수가 아니라
	// 해당 함수의 코드만 수정하면 된다.
	// ex) int sum = num_a - num_b;
	int sum = num_a * num_b;

	return sum;
}

// return 할 것이 없기 때문에 반환형은 void
void printHelloWorld()
{
	cout << "Hello World " << endl;

	return; // return을 만나면 무조건 반환해서 main 함수로 돌아간다.

	cout << "Hello World 2" << endl;
}

void print()
{
	cout << "Hello" << endl;
}

int addTwoNumbers(int a, int b)
{
	/*
	cpp는 함수 안에서 함수를 정의할 수 없다.
	void print()
	{
		cout << "Hello" << endl;
	}
	*/
	print();
	return a + b;
}

int main()
{
	/*
	숫자 두 개를 더하고, 그 결과를 출력하는 패턴이 반복되고 있다.
	cout << 1 + 2 << endl;
	cout << 3 + 4 << endl;
	cout << 8 + 13 << endl;
	*/

	// 함수이름(인수, argument)
	cout << multiplyTwoNumbers(1, 2) << endl;
	cout << multiplyTwoNumbers(3, 4) << endl;
	cout << multiplyTwoNumbers(8, 13) << endl;

	printHelloWorld();

	int sum = addTwoNumbers(1, 2);

	return 0;
}