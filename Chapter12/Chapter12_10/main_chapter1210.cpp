#include <iostream>
#include <string>

using namespace std;

class Base
{
public:
	int m_i = 0;

	virtual void print()
	{
		cout << "I'm Base" << endl;
	}
};

class Derived1 : public Base
{
public:
	int m_j = 1024;

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

class Derived2 : public Base
{
public:
	string m_name = "Dr. Two";

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

int main()
{
	Derived1 d1;
	Base *base = &d1;	// Base에는 없고 Derived에만 있는 것들에는 접근 불가능
	d1.m_j = 2048;

	// 가급적 이런 식으로 코딩은 지양하기...
	auto *base_to_d1 = dynamic_cast<Derived1*>(base);
	cout << base_to_d1->m_j << endl;

	base_to_d1->m_j = 256;
	cout << d1.m_j << endl;

	// dynamic_cast는 casting에 실패하면 nullptr를 넣어 버림
	// 같은 부모를 가지고 있어도 이런 식으로 d1=>d2 형변환은 불가능함!
	auto *base_to_d2 = dynamic_cast<Derived2*>(base);
	if (base_to_d2 != nullptr)
		base_to_d2->print();
	else
		cout << "Failed" << endl;

	// static_cast도 가능함
	auto *base_to_d1_2 = static_cast<Derived1*>(base);
	if (base_to_d1_2 != nullptr)
		base_to_d1_2->print();
	else
		cout << "Failed" << endl;

	// 단, static cast는 최대한 형변환하려고 하기 때문에 원래라면 안 되는 것들도 되는 경우가 있음
	auto *base_to_d2_2 = static_cast<Derived2*>(base);
	if (base_to_d2_2 != nullptr)
		base_to_d2_2->print();
	else
		cout << "Failed" << endl;

	// 문제가 안 생기는 경우에는 뭘 쓰든 상관이 없지만,
	// dynamic_cast는 런타임에 체크를 해서 아닌 것 같은 경우 nullptr를 넣어 주나
	// static_cast는 그런 기능이 없고 무조건 형변환함

	return 0;
}