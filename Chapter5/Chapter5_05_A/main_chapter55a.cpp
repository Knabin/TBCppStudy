#include <iostream>

int main()
{
	using namespace std;

	// while���� goto������ �ٲ� ����
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