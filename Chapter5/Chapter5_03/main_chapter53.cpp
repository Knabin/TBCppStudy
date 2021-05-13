#include <iostream>

using namespace std;

enum class Colors
{
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE
};

void printColorName(Colors color)
{
	/*if (color == Colors::BLACK)
		cout << "Black" << endl;
	else if (color == Colors::WHITE)
		cout << "White" << endl;*/
	switch (static_cast<int>(color))
	{
	case 0:
		cout << "Black" << endl;
		break;
	case 1:
		cout << "White" << endl;
		break;
	case 2:
		cout << "Red" << endl;
		break;
	case 3:
		cout << "Green" << endl;
		break;
	case 4:
		cout << "Blue" << endl;
		break;
	default:
		break;
	}
}

int main()
{
	printColorName(Colors::BLACK);

	int x;
	cin >> x;

	{
		int y1 = 0;	// 차라리 이쪽에 선언하는 것이 좋고(1)
		switch (x)
		{
			int a;
			//int b = 5;	초기화 불가능! error C2360: initialization of 'b' is skipped by 'case' label
		case 0:
			int y;	// case문 안에 선언해도 위에 int a처럼 똑같이 작동함
			break;	// switch를 빠져나감
		case 1:
			y = 5;
			cout << y << endl;
			break;
		case 2:
		{
			// 또는 case문 전체를 블록으로 싸서 사용하자(2)
			int y = 0;
			cout << y << endl;
			break;
		}
		default:
			cout << "Undefined input " << x << endl;
			break;	// 없어도 됨
		}
	}

	cout << endl;


	return 0;
}