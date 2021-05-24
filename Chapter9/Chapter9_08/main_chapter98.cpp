#include <iostream>

using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; }

	operator int()
	{
		cout << "cast here" << endl;
		return m_cents;
	}
};

class Dollar
{
private:
	int m_dollars = 0;

public:
	Dollar(const int& input) : m_dollars(input) {}

	operator Cents()
	{
		return Cents(m_dollars * 100);
	}
};

void printInt(const int &value)
{
	cout << value << endl;
}

int main()
{
	Cents c(10);

	int value = (int)c;
	value = int(c);
	value = static_cast<int>(c);

	printInt(c);

	cout << endl;

	Dollar dol(2);
	Cents cen = dol;
	printInt(cen);

	return 0;
}