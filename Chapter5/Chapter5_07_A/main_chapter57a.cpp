#include <iostream>
using namespace std;

int getNumber()
{
	int tmp;
	while (true)
	{
		cin >> tmp;
		if (std::cin.fail())	// 실패했을 경우 return true
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');	// 버퍼 비우기, 32767=적당히 큰 숫자
			cout << "유효하지 않은 숫자입니다. 다시 입력해 주세요." << endl;
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return tmp;
		}
	}
}

int main(void)
{
	cout << "1. 구구단 출력" << endl;
	cout << "시작할 단을 입력해 주세요: ";
	int start = getNumber();
	cout << "끝낼 단을 입력해 주세요: ";
	int end = getNumber();
	cout << endl;

	for (int i = start; i <= end; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			cout << i << " * " << j << " = " << i * j << "\t";
			if (j % 3 == 0) cout << endl;
		}
		cout << endl;
	}
	cout << endl;

	cout << "2. 1부터 20까지 짝수만 출력하기" << endl;
	for (int i = 1; i <= 20; i++)
	{
		if (i % 2 == 0) cout << i << "\t";
		if (i % 10 == 0) cout << endl;
	}
	cout << endl;

	cout << "3. 0부터 10까지 더하기" << endl;
	int result = 0;
	for (int i = 1; i <= 10; i++)
	{
		result += i;

		if (i == 1) cout << i;
		else cout << " + " << i;
		if (i == 10) cout << " = " << result << endl;
	}

	return 0;
}