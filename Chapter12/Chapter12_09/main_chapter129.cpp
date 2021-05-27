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
	//Base b = d;	// 복사 대입, d만 가지고 있는 정보는 b가 가질 수 없음!! => 의도적인 것이라면 주석을 달아 주는 것이 좋음
	b.print();
	doSomething(d);
	doSomething2(d);	// 매개변수 자리에 &를 빼 버리면 다형성이 사라짐!
	*/

	Base b;
	Derived d;

	// 1. Base 타입 vector
	std::vector<Base> my_vec;

	my_vec.push_back(b);
	my_vec.push_back(d);

	for (auto & ele : my_vec)
		ele.print();
	cout << endl;

	// 2. Base *타입 vector
	std::vector<Base *> my_vec2;
	my_vec2.push_back(&b);
	my_vec2.push_back(&d);

	for (auto &ele : my_vec2)
		ele->print();
	cout << endl;


	// 3. Base &타입 vector
	//std::vector<Base&> my_vec;	//error! 'data': pointer to reference is illegal

	// #include <functional> 필요!
	std::vector<std::reference_wrapper<Base>> my_vec3;

	my_vec3.push_back(b);
	my_vec3.push_back(d);

	for (auto & ele : my_vec3)
		ele.get().print();

	return 0;
}