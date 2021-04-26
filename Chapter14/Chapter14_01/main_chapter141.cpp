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

// 리턴값을 bool로 처리할 수도 있음
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
	// 1. 퍼포먼스
	// 2. 대체할 수 있는 문법이 없었음
	
	// throw try catch는 약간 느려지는 경우가 있음!
	// => 정말 예측할 수 없는 일이 자주 일어날 경우(서버)
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
