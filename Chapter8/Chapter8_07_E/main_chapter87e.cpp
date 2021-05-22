#include <iostream>

using namespace std;

class Calc
{
private:
	int m_value;
public:
	Calc(int init_value)
		: m_value(init_value)
	{}

	Calc& add(int value) { m_value += value; return *this; }
	Calc& sub(int value) { m_value -= value; return *this; }
	Calc& mult(int value) { m_value *= value; return *this; }

	void print()
	{
		cout << m_value << endl;
	}

};

int main()
{
	Calc cal(10);
	/*cal.add(10);
	cal.sub(1);
	cal.mult(2);
	cal.print();*/
	
	// member-function chaining
	cal.add(10).sub(1).mult(2).print();
	Calc &temp1 = cal.add(10);
	Calc &temp2 = temp1.sub(1);
	Calc &temp3 = temp2.mult(2);
	

	return 0;
}
