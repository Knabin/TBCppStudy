#include <iostream>

int main()
{
	using namespace std;

	//cout << 1 << endl;
	//cout << 2 << endl;
	// ...
	//cout << 9 << endl;

	cout << "While-loop test" << endl;

	int count = 0;	// 몇 번 돌릴 건지
	while (1)	// 괄호가 true(0이 아님)인 경우 반복
	{
		//int count = 0;	// 여기에 선언해서 출력하면 계속 0만 출력됨, static 붙이면 OK
		cout << count << endl;
		++count;

		if (count >= 10) break;
	}

	// unsigned int를 사용하면 문제가 생길 수 있다! 10 9 ... 1 0 4294967295
	// unsigned가 signed보다 빠른 것 같기 때문에 꼭! 사용하지 말라는 것은 아니다
	unsigned int count_u = 10;
	/*
	while (count_u >= 0)
	{
		if (count_u == 0) cout << "Zero";
		else cout << count_u << " ";
		count_u--;
	}
	*/

	count = 1;

	while (count < 100)
	{
		if (count % 5 == 0) cout << "Hello " << count << endl;

		count++;
	}


	int outer_count = 1;
	while (outer_count <= 5)
	{
		int inner_count = 1;
		while (inner_count <= outer_count)
		{
			cout << inner_count++ << " ";
		}
		cout << endl;
		++outer_count;
	}

	return 0;
}