#include <iostream>

namespace a
{
	int my_var(10);
	int my_a(123);
}

namespace b
{
	int my_var(20);
	int my_b(456);
}

int main()
{
	//std::cout std::endl�� �ٿ� ���� ����
	// using namespace�� ��� ��� ����� ���� ������ ������� �� �ִ� ���� ����
	using namespace std;
	/*using std::cout; 
	using std::endl;*/

	cout << "Hello " << endl;
	
	using namespace a;
	using namespace b;

	// "my_var" is ambiguous!
	//cout << my_var << endl;
	cout << a::my_var << endl;
	cout << b::my_var << endl;
	cout << my_a << endl;
	cout << my_b << endl;

	// ������ �� �ִ� ����� ����!
	/*{
		using namespace a;
		cout << my_var << endl;
	}

	{
		using namespace b;
		cout << my_var << endl;
	}*/

	return 0;
}