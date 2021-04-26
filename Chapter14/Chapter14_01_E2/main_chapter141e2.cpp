#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	try
	{
		// something happened
		//throw - 1;
		//throw - 1.0;	// catch(double) ������ error!
		throw "My error message";
		throw std::string("My error message");

		// => �´� Ÿ���� ���ٸ� casting�� �����ϴ� ���� �ƴ϶� runtime error ó��
	}
	catch (int x)
	{
		cout << "Catch integer " << x << endl;
	}
	catch (double x)
	{
		cout << "Catch double " << x << endl;
	}
	catch (const char * error_message)
	{
		cout << "Char * " << error_message << endl;
	}
	catch (std::string error_message)
	{
		//do something to respond
		cout << error_message << endl;
	}

	return 0;
}
