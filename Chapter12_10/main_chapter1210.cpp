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
	Base *base = &d1;	// Base���� ���� Derived���� �ִ� �͵鿡�� ���� �Ұ���
	d1.m_j = 2048;

	// ������ �̷� ������ �ڵ��� �����ϱ�...
	auto *base_to_d1 = dynamic_cast<Derived1*>(base);
	cout << base_to_d1->m_j << endl;

	base_to_d1->m_j = 256;
	cout << d1.m_j << endl;

	// dynamic_cast�� casting�� �����ϸ� nullptr�� �־� ����
	// ���� �θ� ������ �־ �̷� ������ d1=>d2 ����ȯ�� �Ұ�����!
	auto *base_to_d2 = dynamic_cast<Derived2*>(base);
	if (base_to_d2 != nullptr)
		base_to_d2->print();
	else
		cout << "Failed" << endl;

	// static_cast�� ������
	auto *base_to_d1_2 = static_cast<Derived1*>(base);
	if (base_to_d1_2 != nullptr)
		base_to_d1_2->print();
	else
		cout << "Failed" << endl;

	// ��, static cast�� �ִ��� ����ȯ�Ϸ��� �ϱ� ������ ������� �� �Ǵ� �͵鵵 �Ǵ� ��찡 ����
	auto *base_to_d2_2 = static_cast<Derived2*>(base);
	if (base_to_d2_2 != nullptr)
		base_to_d2_2->print();
	else
		cout << "Failed" << endl;

	// ������ �� ����� ��쿡�� �� ���� ����� ������,
	// dynamic_cast�� ��Ÿ�ӿ� üũ�� �ؼ� �ƴ� �� ���� ��� nullptr�� �־� �ֳ�
	// static_cast�� �׷� ����� ���� ������ ����ȯ��

	return 0;
}
