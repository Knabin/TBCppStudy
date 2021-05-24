#include <iostream>

using namespace std;

class Digit
{
private:
	int m_digit;
public:
	Digit(int digit = 0) : m_digit(digit) {}

	//prefix
	Digit & operator ++ ()
	{
		++m_digit;
		// 자기 자신을 return한다고 보면 됨
		return *this;
	}

	// postfix: parameter에 dummy가 필요함!!
	Digit operator ++ (int)
	{
		Digit temp(m_digit);
		++(*this);
		return temp;
	}

	friend ostream& operator << (ostream &out, const Digit &d)
	{
		out << d.m_digit;
		return out;
	}
};

int main()
{
	/*
	int a = 10;
	cout << ++a << endl;   //11
	cout << a << endl;     //11
	cout << a++ << endl;   //11
	cout << a << endl;     //12
	*/

	Digit d(5);

	cout << ++d << endl;
	cout << d << endl;

	cout << d++ << endl;
	cout << d << endl;

	return 0;
}