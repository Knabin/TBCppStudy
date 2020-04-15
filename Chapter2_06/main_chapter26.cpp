#include <iostream>

bool isEqual(int a, int b)
{
	bool result = (a == b);
	return result;
}

int main()
{
	using namespace std;

	bool b1 = true;		// copy initialization
	bool b2(false);		// direct initialization
	bool b3{ true };	// uniform initiaalization
	b3 = false;

	cout << std::boolalpha;	// true false로 출력하기
	cout << b3 << endl;
	cout << !b1 << endl;	// not 연산자 true->false, false->true
	cout << std::noboolalpha;	// 1 0으로 출력하기

	// && AND operator: 두 개 다 true인 경우 true
	cout << (true && true) << endl;		// true
	cout << (true && false) << endl;	// false
	cout << (false && true) << endl;	// false
	cout << (false && false) << endl;	// false

	// || OR operator: 한 개 이상 true인 경우 true
	cout << (true || true) << endl;		// true
	cout << (true || false) << endl;	// true
	cout << (false || true) << endl;	// true
	cout << (false || false) << endl;	// false


	// 조건문 if: 조건에 따라서 실행할지 안 할지를 결정한다.
	// 두 줄 이상을 실행하고 싶을 때는 중괄호{}를 이용한다.
	if (false)
	{
		cout << "This is true" << endl;
		cout << "True second line" << endl;
	}
	else
		cout << "This is false" << endl;

	cout << isEqual(1, 1) << endl;	// true
	cout << isEqual(2, 5) << endl;	// false


	// if문은 0이면 false, 그 외는 전부 true 처리!
	if (5)
	{
		cout << "true" << endl;
	}
	else
		cout << "false" << endl;


	// 주의! 불리언 값을 입력할 때, 문자가 아니라 0/1로 입력해야 한다!
	// 0이 아니면 true 처리를 하는 것을 주의한다.
	// 이러한 위험성이 있는, 문제가 생길 수 있는 코딩은 피하자.
	cout << std::boolalpha;
	bool b;

	cin >> b;
	cout << "Your input: " << b << endl;

	return 0;
}