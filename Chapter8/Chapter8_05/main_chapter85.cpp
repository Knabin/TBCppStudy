#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
	int		m_id;
	string	m_name;

public:
	// 어떠한 기능을 하는 코드는 한 군데서만!
	Student(const string& name_in)
	//	: m_id(0), m_name(name_in)
		: Student(0, name_in)
	{
		//init(id_in, name_in);	
	}

	Student(const int& id_in, const string& name_in)
		: m_id(id_in), m_name(name_in)
	{
		//init(id_in, name_in);
	}

	// 초기화 코드를 분리하는 경우도 있음!
	void init(const int& id_in, const string& name_in)
	{
		m_id = id_in;
		m_name = name_in;
	}

	void print()
	{
		cout << m_id << " " << m_name << endl;
	}
};

int main()
{
	Student st1(0, "Jack Jack");
	st1.print();

	Student st2("Dash");
	st2.print();

	return 0;
}