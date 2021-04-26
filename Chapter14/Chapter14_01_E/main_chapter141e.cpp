#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	// try, catch, throw
	// try: 시도함
	// throw: 시도를 했더니 무슨 일이 일어나서 던짐
	// catch: 던져진 일을 받아서 처리함

	double x;
	cin >> x;

	try
	{
		if (x < 0.0) throw std::string("Negative input");
		//if (x < 0.0) throw "Negative input";	// error! 예외처리 시 엄격한 casting!

		cout << std::sqrt(x) << endl;		// sqrt(): x가 0보다 작을 경우에는 구할 수 없음
	}
	catch (std::string error_message)
	{
		//do something to respond
		cout << error_message << endl;
	}

	return 0;
}
