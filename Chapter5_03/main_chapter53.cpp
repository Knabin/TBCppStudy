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
		int y1 = 0;	// ���� ���ʿ� �����ϴ� ���� ����(1)
		switch (x)
		{
			int a;
			//int b = 5;	�ʱ�ȭ �Ұ���! error C2360: initialization of 'b' is skipped by 'case' label
		case 0:
			int y;	// case�� �ȿ� �����ص� ���� int aó�� �Ȱ��� �۵���
			break;	// switch�� ��������
		case 1:
			y = 5;
			cout << y << endl;
			break;
		case 2:
		{
			// �Ǵ� case�� ��ü�� ������� �μ� �������(2)
			int y = 0;
			cout << y << endl;
			break;
		}
		default:
			cout << "Undefined input " << x << endl;
			break;	// ��� ��
		}
	}

	cout << endl;


	return 0;
}