#include "Calc.h"

using namespace std;

Calc::Calc(int init_value)
	: m_value(init_value)
{}

Calc& Calc::add(int value)
{
	m_value += value;
	return *this;
}

Calc& Calc::sub(int value)
{
	m_value -= value;
	return *this;
}

Calc & Calc::mult(int value)
{
	m_value *= value;
	return *this;
}

void Calc::print()
{
	cout << m_value << endl;
}
