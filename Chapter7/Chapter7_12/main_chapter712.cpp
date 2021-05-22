#include <iostream>
using namespace std;

void countDown(int count)
{
	// 같은 코드를 따로따로 실행시키고 있는 것, 코드는 다른 곳에 저장되어 있고 주소를 찾아서 호출함
	// 스택 오버플로우 주의!
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