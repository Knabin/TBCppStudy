#include <iostream>
#include <limits>
//int
//unsigned int

int main()
{
	using namespace std;
	cout << "int size: " << sizeof(int) << endl;
	cout << "u-int size: " << sizeof(unsigned int) << endl;

	cout << "\nint max: " << std::numeric_limits<int>::max() << endl;
	cout << "u-int max: " << std::numeric_limits<unsigned int>::max() << endl;

	cout << "\nint min: " << std::numeric_limits<int>::min() << endl;
	cout << "u-int min: " << std::numeric_limits<unsigned int>::min() << endl;

	cout << "\nint lowest: " << std::numeric_limits<int>::lowest() << endl;
	cout << "u-int lowest: " << std::numeric_limits<unsigned int>::lowest() << endl;

	return 0;
}