#include <iostream>
using namespace std;

void countDown(int count)
{
	// ���� �ڵ带 ���ε��� �����Ű�� �ִ� ��, �ڵ�� �ٸ� ���� ����Ǿ� �ְ� �ּҸ� ã�Ƽ� ȣ����
	// ���� �����÷ο� ����!
	cout << count << endl;

	if(count > 0)
		countDown(count - 1);
}

int sumTo(int sumto)
{
	if (sumto <= 0)
		return 0;
	else if (sumto <= 1)
		return 1;
	else
		return sumTo(sumto - 1) + sumto;
}

int main()
{
	countDown(2);

	cout << sumTo(10) << endl;

	return 0;
}