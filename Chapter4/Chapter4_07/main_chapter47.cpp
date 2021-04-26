#include <iostream>
#include <string>

// ����ġ�� �󸶳� ��� �ϴ���...
int computeDamage(int weapon_id)
{
	if (weapon_id == 0)	// sword
	{
		return 1;
	}
	if (weapon_id == 1)	// hammer
	{
		return 2;
	}
	// ...
}

enum Color	// user-defined data types
{
	COLOR_BLACK = -3,	// �������� ���� �Ҵ��� �� �ְ�, �ڵ����� ���� ���� �Ҵ��
	COLOR_RED,			// -2
	COLOR_BLUE = 5,
	COLOR_GREEN = 5,	// �������� ���� ���� �Ҵ��� �� ������ ���е��� �����Ƿ� ����X
	COLOR_SKYBLUE,	// �������� �ݷ� �ٿ��� �������!
	BLUE
};

enum Feeling
{
	HAPPY,
	JOY,
	TIRED,
	//BLUE	error!! 'BLUE': redefinition; previous definition was 'enumerator'
};

int main()
{
	using namespace std;

	Color paint = COLOR_BLACK;
	Color house(COLOR_BLUE);
	Color apple{ COLOR_RED };	// ������ �ʿ䰡 ���� => class �ʱ�ȭ����..

	Color my_color = COLOR_BLACK;

	cout << my_color << " " << COLOR_BLACK << endl;


	if (COLOR_BLUE == COLOR_GREEN)
	{
		cout << "Equal" << endl;
	}

	int color_id = COLOR_BLACK;	// OK
	Color my_id = static_cast<Color>(3);	// OK
	//Color my_id = 3;	error! integer�� ���� �� ����

	//cin >> my_id;	error!
	int in_number;
	cin >> in_number;

	if (in_number == 0) my_color = COLOR_BLACK;
	// ...

	string str_input;
	std::getline(cin, str_input);

	// ���� X, ��Ÿ �� ���...
	if (str_input == "COLOR_BLACK")
		my_color = static_cast<Color>(0);
	

	return 0;
}