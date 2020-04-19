#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	// 0110 >> 2 -> decimal
	unsigned int a = 0b0110 >> 2;
	cout << a << "\t" << std::bitset<4>(a) << endl;

	int x = 5;
	int y = 12;

	// 5 | 12 -> decimal
	int n1 = x | y;
	cout << n1 << "\t" << std::bitset<4>(n1) << endl;

	// 5 & 12 -> decimal
	int n2 = x & y;
	cout << n2 << "\t" << std::bitset<4>(n2) << endl;

	// 5 ^ 12 -> decimal
	int n3 = x ^ y;
	cout << n3 << "\t" << std::bitset<4>(n3) << endl;

	return 0;
}