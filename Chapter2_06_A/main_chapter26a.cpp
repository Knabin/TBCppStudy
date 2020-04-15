#include <iostream>
// 정수 하나를 입력받고 그 숫자가 홀수인지 짝수인지 출력하는 프로그램
// 나머지 연산자 사용

int main()
{
	using namespace std;
	
	int input_n = 0;
	cout << "정수를 입력하세요." << endl;
	cin >> input_n;

	if (input_n == 0) 
	{
		cout << "0입니다." << endl;
	}
	else if (input_n % 2 == 0) {
		// 짝수라면
		cout << input_n << "는 짝수입니다." << endl;
	}
	else
	{
		// 홀수라면
		cout << input_n << "는 홀수입니다." << endl;
	}

	return 0;
}