#include <iostream>
using namespace std;

void breakOrReturn()
{
	while (true)
	{
		char ch;
		cin >> ch;

		if (ch == 'b')
			break;

		if (ch == 'r')
			return;
	}

	// break는 Hello 출력 / return은 함수 탈출
	cout << "Hello" << endl;
}

int main()
{
	int count = 0;
	while (true)
	{
		cout << count << endl;
		if (count == 2) break;	// 현재 블럭에서 빠져나감
		count++; 
	}

	breakOrReturn();

	for (int i = 0; i < 10; i++)
	{
		//if (i % 2 == 1) cout << i << endl;
		
		// continue는 아랫부분을 실행하지 않고 for문의 i++ 실행
		if (i % 2 == 0) continue;

		cout << i << endl;
	}


	int count2(0);
	do
	{
		if (count2 == 5)
			continue;

		cout << count2 << endl;
	} while (++count2 < 10);

	/*
	이렇게 코딩하면 count2==5인 경우, continue로 인해 count2++이 진행 X(무한루프)
	while문이나 do-while문은 for문보다 조금 까다로울 수 있음
	do
	{
		if (count2 == 5)
			continue;
		cout << count2 << endl;
		count2++;
	} while (count2 < 10);
	*/


	// break가 조건보다 편한 경우
	// flag 사용
	int count3(0);
	bool escape_flag = false;

	while (!escape_flag)
	{
		// 사용자 정의 변수 등을 사용하면 느려질 수 있음, 밖으로 빼는 게 좋음
		char ch;
		cin >> ch;

		cout << ch << " " << count3++ << endl;

		if (ch == 'x')
			escape_flag = true;
	}
	
	int count4(0);

	// break 사용
	while (true)
	{
		char ch;
		cin >> ch;

		cout << ch << " " << count4++ << endl;

		if (ch == 'x')
			break;
	}

	return 0;
}