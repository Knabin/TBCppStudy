#include <iostream>
#include <vector>
#include <functional>

using namespace std;

class Base
{
public:
	int m_i = 0;

	virtual void print()
	{
		cout << "I'm base" << endl;
	}
};

class Derived : public Base
{
public:
	int m_j = 1;

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

void doSomething(Base & b)
{
	b.print();
}

void doSomething2(Base b)
{
	b.print();
}

int main()
{
	/*
	Derived d;
	Base &b = d;
	//Base b = d;	// ���� ����, d�� ������ �ִ� ������ b�� ���� �� ����!! => �ǵ����� ���̶�� �ּ��� �޾� �ִ� ���� ����

	b.print();

	doSomething(d);
	doSomething2(d);	// �Ű����� �ڸ��� &�� �� ������ �������� �����!
	*/

	Base b;
	Derived d;

	// 1. Base Ÿ�� vector
	std::vector<Base> my_vec;

	my_vec.push_back(b);
	my_vec.push_back(d);

	for (auto & ele : my_vec)
		ele.print();
	cout << endl;

	// 2. Base *Ÿ�� vector
	std::vector<Base *> my_vec2;
	my_vec2.push_back(&b);
	my_vec2.push_back(&d);

	for (auto &ele : my_vec2)
		ele->print();
	cout << endl;


	// 3. Base &Ÿ�� vector
	//std::vector<Base&> my_vec;	//error! 'data': pointer to reference is illegal

	// #include <functional> �ʿ�!
	std::vector<std::reference_wrapper<Base>> my_vec3;

	my_vec3.push_back(b);
	my_vec3.push_back(d);

	for (auto & ele : my_vec3)
		ele.get().print();

	return 0;
}
