#include <iostream>

using namespace std;

/*
enum FruitType
{
	APPLE, BANANA, CHERRY,
};
*/

class Fruit
{
public:
	enum FruitType
	{
		APPLE, BANANA, CHERRY,
	};

	class InnerClass
	{

	};

	struct InnerStruct
	{

	};

private:
	FruitType m_type;

public:
	Fruit(FruitType type) : m_type(type)
	{}

	FruitType getType() { return m_type; }
};

int main()
{
	// enum class, Fruit::FruitType::APPLE
	Fruit apple(Fruit::APPLE);

	if (apple.getType() == Fruit::APPLE)
	{
		cout << "Apple" << endl;
	}

	return 0;
}
