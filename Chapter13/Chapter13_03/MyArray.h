#pragma once
#include <assert.h>	// for assert()
#include <iostream>

template<typename T, unsigned int T_SIZE>
class MyArray
{
private:
	//int m_length;
	T *m_data;	// T m_data[T_SIZE]

public:
	MyArray()
	{
		m_data = new T[T_SIZE];
	}

	~MyArray()
	{
		delete[] m_data;
	}

	T & operator[](int index)
	{
		assert(index >= 0 && index < T_SIZE);
		return m_data[index];
	}

	int getLength()
	{
		return T_SIZE;
	}

	// explicit instantiation을 한다면, T_SIZE로 들어오는 모든 경우에 대해 다 처리해야 함 => ??
	// non-type의 경우 헤더에서 사용하는 것이 괜찮은 듯하다!
	void print()
	{
		for (int i = 0; i < T_SIZE; ++i)
			std::cout << m_data[i] << " ";
		std::cout << std::endl;
	}
};