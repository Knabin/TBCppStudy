#include <iostream>
#include <string>

// 피해치를 얼마나 줘야 하는지...
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
	COLOR_BLACK = -3,	// 수동으로 값을 할당할 수 있고, 자동으로 다음 값도 할당됨
	COLOR_RED,			// -2
	COLOR_BLUE = 5,
	COLOR_GREEN = 5,	// 수동으로 같은 값을 할당할 수 있으나 구분되지 않으므로 권장X
	COLOR_SKYBLUE,	// 마지막에 콜론 붙여도 상관없음!
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
	Color apple{ COLOR_RED };	// 주의할 필요가 있음 => class 초기화에서..

	Color my_color = COLOR_BLACK;

	cout << my_color << " " << COLOR_BLACK << endl;


	if (COLOR_BLUE == COLOR_GREEN)
	{
		cout << "Equal" << endl;
	}

	int color_id = COLOR_BLACK;	// OK
	Color my_id = static_cast<Color>(3);	// OK
	//Color my_id = 3;	error! integer를 넣을 수 없음

	//cin >> my_id;	error!
	int in_number;
	cin >> in_number;

	if (in_number == 0) my_color = COLOR_BLACK;
	// ...

	string str_input;
	std::getline(cin, str_input);

	// 권장 X, 오타 낼 경우...
	if (str_input == "COLOR_BLACK")
		my_color = static_cast<Color>(0);
	

	return 0;
}