#include <iostream>
#include <exception>
#include <string>

using namespace std;

int main()
{
	try
	{
		string s;
		s.resize(-1);	// 내부에서 exception을 throw하게끔 되어 있음
	}
	catch (length_error & exception)	// 자식 클래스 중 하나
	{
		cerr << "Length_Error" << endl;
		cerr << exception.what() << endl;
	}
	catch (exception & exception)
	{
		cout << typeid(exception).name() << endl;	// 어떤 exception인지
		cerr << exception.what() << endl;
	}
	return 0;
}
