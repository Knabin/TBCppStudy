#include <iostream>
#include <memory>

using namespace std;

int main()
{
	try
	{
		int *i = new int[1000000];
		unique_ptr<int> up_i(i);	// unique �����Ͱ� �˾Ƽ� ���� ��

		// do something with i
		throw "error";

		// ���ܰ� �߻��Ѵٸ� delete�� ������� ����!! memory leak
		//delete[] i;
	}
	catch (...)
	{
		cout << "Catch" << endl;
	}

	return 0;
}
