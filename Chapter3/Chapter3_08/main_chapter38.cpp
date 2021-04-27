#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	// cout, cin에서 사용하는 >> <<와는 다르다! (연산자 오버로딩)
	// <<	left shift
	// >>	right shift
	// ~(NOT), &(AND), |(OR), ^(XOR)

	unsigned int a = 3;
	cout << a << "\t" << std::bitset<8>(a) << endl;	// 3 00000011

	unsigned int b = a << 1;
	cout << b << "\t" << std::bitset<8>(b) << endl;	// 6 00000110

	cout << (a << 2) << "\t" << std::bitset<8>(a << 2) << endl;	// 12 00001100
	cout << (a << 3) << "\t" << std::bitset<8>(a << 3) << endl;	// 24 00011000
	cout << (a << 4) << "\t" << std::bitset<8>(a << 4) << endl;	// 48 00110000
	cout << endl;

	unsigned int c = 1024;
	cout << c << "\t" << std::bitset<16>(c) << endl;

	cout << (c >> 1) << "\t" << std::bitset<16>(c >> 1) << endl;
	cout << (c >> 2) << "\t" << std::bitset<16>(c >> 2) << endl;
	cout << (c >> 3) << "\t" << std::bitset<16>(c >> 3) << endl;
	cout << (c >> 4) << "\t" << std::bitset<16>(c >> 4) << endl;
	cout << endl;


	cout << (~c) << std::bitset<16>(~c) << endl;
	cout << endl;


	unsigned int d = 0b1100;
	unsigned int e = 0b0110;

	cout << d << " " << e << endl;
	cout << std::bitset<4>(d & e) << endl;	// bitwise AND
	cout << std::bitset<4>(d | e) << endl;	// bitwise OR
	cout << std::bitset<4>(d ^ e) << endl;	// bitwise XOR

	d = d & e;
	d &= e;
	
	return 0;
}