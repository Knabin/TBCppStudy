#pragma once
#include <iostream>

// ������Ͽ��� using namespace�� ����ϰ� �Ǹ� include�ϴ� �͵���
// ���� ������ �ޱ� ������ ������� �ʴ� �� ����!!

class Calc
{
private:
	int m_value;
public:
	Calc(int init_value);

	Calc& add(int value);
	Calc& sub(int value);
	Calc& mult(int value);
	void print();
};

