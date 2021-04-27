#include <iostream>
// 정수 하나를 입력받고 그 숫자가 홀수인지 짝수인지 출력하는 프로그램
// 나머지 연산자 사용

int main()
{
	using namespace std;
	
	int input_n = 0;
	cout << "������ �Է��ϼ���." << endl;
	cin >> input_n;

	if (input_n == 0) 
	{
		cout << "0�Դϴ�." << endl;
	}
	else if (input_n % 2 == 0) {
		// 짝수라면
		cout << input_n << "�� ¦���Դϴ�." << endl;
	}
	else
	{
		// 홀수라면
		cout << input_n << "�� Ȧ���Դϴ�." << endl;
	}

	return 0;
}