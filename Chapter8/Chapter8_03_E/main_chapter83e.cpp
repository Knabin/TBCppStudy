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
//private:	말도 안 되나, 사용하는 특별한 경우도 있음 추후 배움
	First()
	{
		cout << "class First constructor()" << endl;
	}
};

int main()
{
	// Second 생성자 -> First 생성자
	// 멤버인 Second부터 초기화하기 위해 먼저 생성자 실행, 그 후 First의 생성자 실행
	First fir;

	return 0;
}