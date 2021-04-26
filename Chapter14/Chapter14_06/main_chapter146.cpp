#include <iostream>
#include <memory>

using namespace std;

int main()
{
	try
	{
		int *i = new int[1000000];
		unique_ptr<int> up_i(i);	// unique 포인터가 알아서 지워 줌

		// do something with i
		throw "error";

		// 예외가 발생한다면 delete가 실행되지 못함!! memory leak
		//delete[] i;
	}
	catch (...)
	{
		cout << "Catch" << endl;
	}

	return 0;
}
