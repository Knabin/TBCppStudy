#include <iostream>
#include <exception>
#include <string>

using namespace std;

class CustomException : public exception
{
public:
	// noexcept: C++ 11 �̻󿡼� �ٿ� ��� ��
	const char * what() const noexcept override
	{
		return "Custom exception";
	}
};

int main()
{
	try
	{
		//throw std::runtime_error("Bad thing happend");
		throw CustomException();
	}
	catch (exception & exception)
	{
		cout << typeid(exception).name() << endl;	// � exception����
		cerr << exception.what() << endl;
	}
	return 0;
}
