#include <iostream>

using namespace std;

class IntArray
{
private:
	int *m_arr = nullptr;	// vector
	int m_length = 0;

public:
	IntArray(const int length_in)
	{
		m_length = length_in;
		m_arr = new int[m_length];

		cout << "Constructor" << endl;
	}

	~IntArray()
	{
		if(m_arr != nullptr) delete[] m_arr;
	}

	int getLength()
	{
		return m_length;
	}
};

int main()
{
	while (true)
	{
		IntArray my_int_arr(10000);
	}

	return 0;
}
