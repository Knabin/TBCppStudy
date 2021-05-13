#include <iostream>
// while문과 break를 사용해서 문자열을 출력, 마지막에 널 캐릭터는 출력하지 않게끔
// 포인트 연산 사용 ++ptr

using namespace std;

void printArray(char *arr)
{
	char *ptr = arr;
	while (true)
	{
		cout << *ptr << endl;
		if (*(++ptr) == '\0')
			return;
	}
}

int main()
{
	const int MAX = 100;
	char array[MAX];

	cout << "���ڿ��� �Է��� �ּ���." << endl;
	while (true)
	{
		cin.getline(array, MAX);
		if (!cin.fail())
			break;
		cin.clear();
		cin.ignore(MAX, '\n');
	}

	printArray(array);

	return 0;
}