#pragma once
#include <iostream>

// 헤더파일에서 using namespace를 사용하게 되면 include하는 것들이
// 전부 영향을 받기 때문에 사용하지 않는 게 좋음!!

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

