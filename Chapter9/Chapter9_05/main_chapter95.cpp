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
		// �ڱ� �ڽ��� return�Ѵٰ� ���� ��
		return *this;
	}

	// postfix: parameter�� dummy�� �ʿ���!!
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