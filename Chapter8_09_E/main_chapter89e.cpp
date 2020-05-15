#include <iostream>
#include <string>

using namespace std;

class Something
{
public:
	string m_value = "default";

	// const ������ ���󼭵� overloading ����!!

	const string& getValue() const 
	{ 
		cout << "const version" << endl;
		return m_value; 
	}

	string& getValue() 
	{ 
		cout << "non-const version" << endl;
		return m_value;
	}
};

int main()
{
	Something something;
	something.getValue();
	something.getValue() = 10;

	const Something something2;
	something2.getValue();
	//something2.getValue() = 1004;	//error!

	return 0;
}
