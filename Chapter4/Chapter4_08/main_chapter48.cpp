#include <iostream>

int main()
{
	using namespace std;
	/*
	enum Color
	{
		RED,
		BLUE
	};
	*/
	enum class Color
	{
		RED,
		BLUE
	};

	/*enum Fruit
	{
		BANANA,
		APPLE
	};*/
	enum class Fruit
	{
		BANANA,
		APPLE
	};

	Color color = Color::RED;
	Color color2 = Color::RED;
	Fruit fruit = Fruit::BANANA;
	/*
	��(color == fruit) �Ұ���
	if (color == fruit)	
		cout << "Color is fruit ? " << endl;
	*/

	// ���� �͵鳢���� �� ����
	if (color == color2)
		cout << "Same color" << endl;

	return 0;
}