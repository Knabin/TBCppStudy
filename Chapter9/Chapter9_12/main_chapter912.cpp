#include <iostream>
#include <cassert>
#include <initializer_list>

using namespace std;

class IntArray
{
private:
	unsigned m_length = 0;
	int *m_data = nullptr;

public:
	IntArray(unsigned length)
		: m_length(length)
	{
		m_data = new int[length];
	}

	// initializer_list를 parameter로 받으면 {} 초기화 가능
	// 중복되는 기능은 쪼개서 한 곳에서만 실행이 되게끔 만들기!!
	IntArray(const std::initializer_list<int> &list)
		: IntArray(list.size())
	{
		int count = 0;
		for (auto & element : list)
		{
			m_data[count] = element;
			++count;
		}

		//for (unsigned count = 0; count < list.size(); ++count)
		//	m_data[count] = list[count];	// error!
		// initializer_list는 [] operator를 지원하지 않음
		// for문을 사용하려면 iterator 사용 => 추후 설명
	}

	~IntArray()
	{
		delete[] this->m_data;
	}

	// TODO: overload operator =
	IntArray& operator = (const IntArray & source)
	{
		if (this == &source)
			return *this;

		delete[] m_data;
		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new int[m_length];

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
		else
			m_data = nullptr;

		return *this;
	}

	friend ostream & operator << (ostream & out, IntArray & arr)
	{
		for (unsigned i = 0; i < arr.m_length; ++i)
			out << arr.m_data[i] << " ";
		out << endl;
		return out;
	}
};

int main()
{
	// 기본 자료형의 정적, 동적 배열 둘 다 initializer list로 초기화 가능
	int my_arr1[5] = { 1, 2, 3, 4, 5 };
	int *my_arr2 = new int[5]{ 1, 2, 3, 4, 5 };

	// initializer list를 include 하면 가능!
	auto il = { 10, 20, 30 };

	//IntArray int_array { 1, 2, 3, 4, 5 };
	IntArray int_array = { 1, 2, 3, 4, 5 };	// 가능

	cout << int_array << endl;

	return 0;
}