#include <iostream>

int main()
{
	using namespace std;

	// while문을 goto문으로 바꿔 보기
	int count = 0;

replay:
	cout << count;

	if (++count <= 10)
	{
		cout << "\tgoto" << endl;
		goto replay;
	}
	
	return 0;
}