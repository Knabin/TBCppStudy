#include <iostream>

using namespace std;

class Simple
{
private:
	int m_id;

public:
	Simple(const int& id_in)
		: m_id(id_in)
	{
		cout << "Constructor " << m_id << endl;
	}

	~Simple()	// no parameter
	{
		cout << "Destructor " << m_id << endl;
	}
};

int main()
{
	//Simple s1(0);
	Simple *s1 = new Simple(0);
	Simple s2(1);

	delete s1;

	return 0;
}
