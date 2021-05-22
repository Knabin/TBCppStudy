#include <iostream>

using namespace std;

class B
{
private:
	int m_b;
public:
	B(const int& m_b_in)
		: m_b(m_b_in)
	{}
};

class Something
{
private:
	int		m_i = 100;
	double	m_d = 100.0;
	char	m_c = 'F';
	int		m_arr[5] = { 100, 200, 300, 400, 500 };

	B		m_b{ 1024 };

	// 생성자가 우선!
public:
	Something()
		: m_i(1), m_d(3.14), m_c('a'), m_arr{ 1, 2, 3, 4, 5 }, m_b(m_i - 1)
		//: m_i{ 1 }, m_d{ 3.14 }, m_c{ 'a' }	// casting 불가능
	{
		/*m_i = 1;
		m_d = 3.14;
		m_c = 'a';*/

		// 생성자 안에서 다시 값 변경 가능
		m_i *= 3;
		m_d *= 3.0;
		m_c += 3;
	}

	void print()
	{
		cout << m_i << " " << m_d << " " << m_c << endl;
		for (auto& e : m_arr)
			cout << e << " ";
		cout << endl;
	}
};

int main()
{
	Something som;
	som.print();

	return 0;
}