#include <iostream>
//#include <cstdint>
// iostream���� cstdint�� include�ϰ� �ֱ� ������
// iostream�� include�ϰ� �ִٸ麰���� ���� �ʾƵ� �ȴ�.

int main()
{
	using namespace std;

	std::int16_t i(5);		// 16��Ʈ(2����Ʈ) ������ Ÿ��
	std::int8_t myint = 65;	// char, ĳ������

	cout << myint << endl;

	std::int_fast8_t fi(5);	// 8��Ʈ �� ���� ����(fast) ������ Ÿ��
	std::int_least64_t fl(5);	// ��� 64��Ʈ�� ���� ������ Ÿ��

	return 0;
}