#include <iostream>
#include "MY_CONSTANTS.h"
#define PRICE_PER_ITEM 30	
// C++������ ��� ��ü������ ��ũ�� ��� �� ��!!
// 1. debugging �����
// 2. ���� ������ �ʹ� ����

using namespace std;

void printNumber(const int my_number)
{
	// �Է����� ���� ���� �ٲ����� �ʱ� ������ �Ķ���Ϳ� const�� ���� ����
	// const int& ���� ���·� ���� �����
	// my_number = 456; error!
	int n = my_number;	// �ٲ�� �Ѵٸ� ���� �����Ͽ� �����
	cout << my_number << endl;
}

int main()
{
	// �������� ������� �ʾƾ� �ϴ� ���, const�� ���� ������ ������
	// ����! ����� ���ÿ� �ʱ�ȭ�Ǿ�� ��
	// ����! �ڷ����� const ������ ���� �ǹ̰� �޶����� ��찡 ����
	const double gravity{ 9.8 };
	double const gravity2{ 9.8 };	// ����

	// gravity = 1.2; error!

	printNumber(123);

	// compile time�� �����Ǵ� ���
	// constexpr: ������ �� �����Ǵ� ����� �����ϱ� ����
	const int my_const(123);
	constexpr int my_const2(123);

	int number;
	cin >> number;


	// ������ ����� �ʱ�ȭ
	// runtime�� �����Ǵ� ���
	const int special_number(number);
	// constexpr int special_number(number); error!

	number = 123;
	// special_number(123); error!


	const int price_per_item = 30;
	int num_item = 123;
	//int price = num_item * PRICE_PER_ITEM;
	int price = num_item * price_per_item;


	// ��� ���� ���
	double radius;
	cin >> radius;
	double circumference = 2.0 * radius * constants::moongravity;

	return 0;
}