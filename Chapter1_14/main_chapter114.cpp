#include <iostream>
#include <algorithm>

using namespace std;

// MY_NUMBER�� ������ 9�� ��ü�϶�.
#define MY_NUMBER 9
#define MAX(a, b) (((a)>(b)) ? (a) : (b))
#define LIKE_APPLE

void doSomething();

int main()
{
	cout << MY_NUMBER << endl;
	cout << MAX(1 + 3, 2) << endl;
	cout << std::max(1 + 3, 2) << endl;

	// ���� ���� ���� ������ ������.
	// �ַ� ��Ƽ�÷��� ���α׷�, �׷��� ī�� ��� �� üũ�� �� ����Ѵ�.
	// ��ó���� ���ο����� ��ü���� �ʴ´�.
	/*
#ifdef LIKE_APPLE
	cout << "Apple " << endl;
#else
	cout << "Orange " << endl;
#endif // !LIKE_APPLE
*/

	// define�� �ش� ���� �ȿ����� ����ȴ�!
	doSomething();

	return 0;
}