#pragma once
#include <iostream>

template <class T>
class Storage
{
private:
	T m_value;

public:
	Storage(T value)
	{
		m_value = value;
	}

	~Storage()
	{}

	void print()
	{
		std::cout << m_value << '\n';
	}
};

// 헤더파일에서 구현하는 것이 가장 좋은 방법!
// cpp에서 사용하고 싶다면 main.cpp에 #include "Storage.cpp"
template <>
void Storage<double>::print()
{
	std::cout << "Double Type ";
	std::cout << std::scientific << m_value << '\n';
}