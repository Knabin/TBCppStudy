#include <iostream>
#include <exception>
#include <string>

using namespace std;

int main()
{
	try
	{
		string s;
		s.resize(-1);	// ���ο��� exception�� throw�ϰԲ� �Ǿ� ����
	}
	catch (length_error & exception)	// �ڽ� Ŭ���� �� �ϳ�
	{
		cerr << "Length_Error" << endl;
		cerr << exception.what() << endl;
	}
	catch (exception & exception)
	{
		cout << typeid(exception).name() << endl;	// � exception����
		cerr << exception.what() << endl;
	}
	return 0;
}
