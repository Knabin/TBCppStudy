#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	// try, catch, throw
	// try: �õ���
	// throw: �õ��� �ߴ��� ���� ���� �Ͼ�� ����
	// catch: ������ ���� �޾Ƽ� ó����

	double x;
	cin >> x;

	try
	{
		if (x < 0.0) throw std::string("Negative input");
		//if (x < 0.0) throw "Negative input";	// error! ����ó�� �� ������ casting!

		cout << std::sqrt(x) << endl;		// sqrt(): x�� 0���� ���� ��쿡�� ���� �� ����
	}
	catch (std::string error_message)
	{
		//do something to respond
		cout << error_message << endl;
	}

	return 0;
}
