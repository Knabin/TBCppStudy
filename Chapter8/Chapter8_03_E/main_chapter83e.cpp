#include <iostream>

using namespace std;

class Second
{
public:
	Second()
	{
		cout << "class Second constructor()" << endl;
	}
};
class First
{
	Second sec; 

public:
//private:	���� �� �ǳ�, ����ϴ� Ư���� ��쵵 ���� ���� ���
	First()
	{
		cout << "class First constructor()" << endl;
	}
};

int main()
{
	// Second ������ -> First ������
	// ����� Second���� �ʱ�ȭ�ϱ� ���� ���� ������ ����, �� �� First�� ������ ����
	First fir;

	return 0;
}
