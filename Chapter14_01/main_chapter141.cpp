#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int findFirstChar(const char * string, char ch)
{
	for (std::size_t index = 0; index < strlen(string); ++index)
		if (string[index] == ch)
			return index;

	return -1;	// no match
}

// ���ϰ��� bool�� ó���� ���� ����
double divide(int x, int y, bool &success)
{
	if (y == 0)
	{
		success = false;
		return 0.0;
	}

	success = false;
	return static_cast<double>(x) / y;
}

int main()
{
	// 1. �����ս�
	// 2. ��ü�� �� �ִ� ������ ������
	
	// throw try catch�� �ణ �������� ��찡 ����!
	// => ���� ������ �� ���� ���� ���� �Ͼ ���(����)
	bool success;
	double result = divide(5, 3, success);

	if (!success)
		std::cerr << "An error occurred" << std::endl;
	else
		std::cout << "Result is " << result << std::endl;

	std::ifstream input_file("temp.txt");
	if (!input_file)
		std::cerr << "Cannot open file" << std::endl;

	return 0;
}
