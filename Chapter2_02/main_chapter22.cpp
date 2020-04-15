#include <iostream>
#include <cmath>
#include <limits>

int main()
{
	using namespace std;
	short	s = 1;	// 2 bytes = 2 * 8 bits = 16 bits / 2^16���� �� ǥ�� ����
	int		i = 1;
	long	l = 1;
	long long ll = 1;

	cout << sizeof(short) << endl;		// 2
	cout << sizeof(int) << endl;		// 4
	cout << sizeof(long) << endl;		// 4
	cout << sizeof(long long) << endl;	// 8

	cout << std::pow(2, sizeof(short) * 8) << endl;	// unsigned - 65535, -1�� ��ȣ��
	cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl;	// signed - 32767, ��ȣ�� 0 ����
	cout << std::numeric_limits<short>::max() << endl;
	cout << std::numeric_limits<short>::min() << endl;
	cout << std::numeric_limits<short>::lowest() << endl;

	s = 32767;
	s += 1;	// 32768 (++s, s++)

	cout << "32768? " << s << endl;	// overflow

	short s2 = std::numeric_limits<short>::min();
	cout << "min() " << s2 << endl;
	s2 -= 1;

	cout << s2 << endl;	// overflow


	// ����! unsigned int�� signed int�� ������ unsigned�� �ٲ� ��
	unsigned int i2 = -1;
	cout << i2 << endl;

	// ����! ���������� ������ ������ ������
	cout << 22 / 4 << endl;
	cout << (float)22 / 4 << endl;

	return 0;
}