#include <iostream>
#include <cassert>	// assert.h
#include <array>

using namespace std;

void printValue(const std::array<int, 5> &my_array, const int& ix)
{
	assert(ix >= 0);
	assert(ix <= my_array.size() - 1);

	cout << my_array[ix] << endl;
}

int main()
{
	int number = 5;

	// ...
	// �ּ��� ���� ���´ٸ� ���� ���� ��� ���� ��
	assert(number == 5);
	
	std::array<int, 5> my_array{ 1,2,3,4,5 };
	printValue(my_array, 100);


	int x = 5;
	const int x2 = 5;
	//assert(x == 5);	// ����!
	//static_assert(x == 5);	// error! ������ Ÿ�ӿ� �޶��� �� �ֱ� ������ �Ұ���
	static_assert(x2 == 5, "x should be 5!");


	return 0;
}