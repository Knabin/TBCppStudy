#include <iostream>
#include <vector>

using namespace std;

class IntArray
{
private:
	int m_length = 0;
	int *m_data = nullptr;

public:

	//TODO: 매개변수를 어떻게 받아야 할지 잘 모르겠다..
	IntArray(int n1, int n2, int n3, int n4, int n5)
	{
		m_length = 5;
		m_data = new int[m_length];

		m_data[0] = n1;
		m_data[1] = n2;
		m_data[2] = n3;
		m_data[3] = n4;
		m_data[4] = n5;
	}

	~IntArray()
	{
		delete[] m_data;
	}

	void initialize(int idx, int value)
	{
		if (m_data != nullptr) return;
		m_data[idx] = value;
	}

	void reset()
	{
		if (m_data != nullptr)
			delete[] m_data;
	}

	void resize()
	{
		int *temp = new int[m_length + 1];
		memcpy(temp, m_data, m_length * sizeof(int));
		reset();
		m_data = temp;
		++m_length;
	}

	// 10, 1
	// 1, 10, 3, 5, 7, 9
	void insertBefore(const int & value, const int & ix)
	{
		resize();
		int *temp = new int[m_length - ix - 1];
		for (int i = 0; i < m_length; i++)
		{
			temp[i] = m_data[i + ix];
		}
		memcpy(&m_data[ix + 1], temp, (m_length - ix - 1) * sizeof(int));
		m_data[ix] = value;
	}

	// 3
	// 1, 10, 3, 7, 9
	void remove(const int & ix)
	{
		int *temp = new int[m_length - 1];
		for (int i = ix + 1; i < m_length; i++)
		{
			temp[i - ix - 1] = m_data[i];
		}
		memcpy(&m_data[ix], temp, (m_length - ix - 1) * sizeof(int));
		--m_length;
	}

	void push_back(const int& value)
	{
		resize();
		m_data[m_length - 1] = value;
	}

	void printTest()
	{
		for (int i = 0; i < m_length; i++)
			cout << m_data[i] << " ";
		cout << endl;
	}

	friend ostream& operator << (ostream & out, const IntArray & arr)
	{
		for (int i = 0; i < arr.m_length; i++)
			out << arr.m_data[i] << " ";
		out << endl;
		return out;
	}

};

int main()
{
	IntArray my_arr{ 1, 3, 5, 7, 9 };
	cout << my_arr;

	my_arr.insertBefore(10, 1);		// 1, 10, 3, 5, 7, 9
	cout << my_arr;

	my_arr.remove(3);				// 1, 10, 3, 7, 9
	cout << my_arr;

	my_arr.push_back(13);			// 1, 10, 3, 7, 9, 13
	cout << my_arr;

	my_arr.push_back(15);
	cout << my_arr;

	my_arr.push_back(17);
	cout << my_arr;

	my_arr.remove(1);
	cout << my_arr;

	my_arr.remove(0);
	cout << my_arr;

	//standard template library: member of 관계
	//vector<int> int_vec;
	//array<int, 10> int_arr;

	return 0;
}