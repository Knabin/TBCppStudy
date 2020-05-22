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

	friend bool operator == (const Cents &c1, const Cents &c2)
	{
		return c1.m_cents == c2.m_cents;
	}

	friend bool operator != (const Cents &c1, const Cents &c2)
	{
		return c1.m_cents != c2.m_cents;
	}

	friend std::ostream& operator << (std::ostream &out, const Cents &cents)
	{
		out << cents.m_cents;
		return out;
	}
};

int main()
{
	//int a = 3, b = 3;
	//if (a == b)
	//   cout << "Equal";

	Cents cents1(6);
	Cents cents2(6);

	if (cents1 == cents2)
		cout << "Equal" << endl;

	cout << std::boolalpha;

	return 0;
}