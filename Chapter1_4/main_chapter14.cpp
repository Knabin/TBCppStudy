#include <iostream>	// cout, cin, endl...
#include <cstdio>	// printf

int main()
{
	int x = 1024;
	double pi = 3.141592;

	// cout, endl ���� �Լ��� std��� �̸����� �ȿ� ���ǵǾ� �ִ�.
	// �� �ȿ� �ִ� ���� ����ϱ� ���Ͽ� �ݷ� �� ��(::)�� �־� �ش�.
	// <<: output operator, ����ϰ� ���� ������ ��Ʈ���� Ÿ�� cout���� ����.
	std::cout << "I love this lecture!" << std::endl;
	std::cout << "x is " << x << " pi is " << pi << std::endl;

	// \t: tab, ��� ����� �����ϴ� ����
	// \n: new line
	std::cout << "abc" << "\t" << "def\n\n" << std::endl;
	std::cout << "ab" << "\t" << "cdef\n" << std::endl;

	// namespace ����� �����ϸ�, �ش� namespace �̸��� �����ص� �����Ϸ��� ó���Ѵ�.
	using namespace std;
	cout << "without std" << endl;

	// \a: audio �Ҹ� ���
	cout << "\a";


	int y = 1;
	cout << "Before your input, y was " << y << endl;
	// >>: input operator, �Է¹��� ������ ��Ʈ���� Ÿ�� �ش� ������ ����.
	cin >> y;

	cout << "Your input is " << y << endl;

	return 0;
}