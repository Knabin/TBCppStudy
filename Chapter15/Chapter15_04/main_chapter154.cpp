#include <string>
#include <vector>

#include "AutoPtr.h"
#include "Resource.h"

using namespace std;

template<class T>
void MySwap(T &a, T &b)	// std::swap
{
	// 복사가 많이 일어난다.
	//T tmp = a;
	//a = b;
	//b = tmp;

	T tmp{ std::move(a) };
	//std::string을 사용할 때 operator =가 다르게 동작한다.
	a = std::move(b);
	b = std::move(tmp);
}

int main()
{
	/*
	{
		AutoPtr<Resource> res1(new Resource(10000000));

		cout << res1.m_ptr << endl;

		// move가 되지 않고, copy가 되고 있다.
		//AutoPtr<Resource> res2 = res1;
		// std::move는 L-value(res1)를 R-value로 return해 준다.
		AutoPtr<Resource> res2 = std::move(res1);

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;
	}
	*/

	/*
	{
		AutoPtr<Resource> res1(new Resource(3));
		res1->setAll(3);

		AutoPtr<Resource> res2(new Resource(5));
		res2->setAll(5);

		res1->print();
		res2->print();

		MySwap(res1, res2);

		res1->print();
		res2->print();
	}
	*/

	/*
	{
		vector<string> v;
		string str = "Hello";

		// void std::vector<std::string>::push_back(const std::string &_Val)
		// L-value, copy semantics
		v.push_back(str);

		cout << str << endl;
		cout << v[0] << endl;

		// void std::vector<std::string>::push_back(std::string &&_Val)
		// R-value, move semantics
		v.push_back(std::move(str));

		cout << str << endl;
		cout << v[0] << " " << v[1] << endl;
	}
	*/

	{
		std::string x{ "abc" };
		std::string y{ "de" };

		std::cout << "x: " << x << std::endl;
		std::cout << "y: " << y << std::endl;

		MySwap(x, y);

		std::cout << "x: " << x << std::endl;
		std::cout << "y: " << y << std::endl;
	}

	return 0;
}
