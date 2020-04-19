#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	/*
	bool item1_flag = false;
	bool item2_flag = false;
	bool item3_flag = false;
	bool item4_flag = false;

	// event!
	item1_flag = true;

	// die item2 lost
	item2_flag = false;

	if (item3_flag == true)
	{
		// event
	}

	if (item3_flag == true && item4_flag == false)
	{
		item3_flag = false;
		item4_flag = true;
	}

	invokeEvent(item1_flag, item2_flag, item3_flag...); ?!

	*/

	// ������ 8���� ������ �ִ����� 1����Ʈ�� �� �� �ְԲ�!
	// bool Ÿ�� 8���� ������ �ʿ䰡 ��������!

	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;
	// opt4,5,6,7

	cout << bitset<8>(opt0) << endl;	// 0000 0001
	cout << bitset<8>(opt1) << endl;	// 0000 0010
	cout << bitset<8>(opt2) << endl;	// 0000 0100
	cout << bitset<8>(opt3) << endl;	// 0000 1000


	unsigned char items_flag = 0;
	cout << "No item " << bitset<8>(items_flag) << endl;	// 0000 0000

	// item0 on
	items_flag |= opt0;
	cout << "Item0 obtained " << bitset<8>(items_flag) << endl;

	// item3 on
	items_flag |= opt3;
	cout << "Item3 obtained " << bitset<8>(items_flag) << endl;

	// item3 lost
	items_flag &= ~opt3;
	cout << "Item3 lost " << bitset<8>(items_flag) << endl;

	// has item1?
	// opt1 �ش� �ڸ� ������ ���ڰ� 1�̸� true ��ȯ
	if (items_flag & opt1) { cout << "Has item1" << endl; }
	else { cout << "Not have item1" << endl; }

	// has item0?
	if (items_flag & opt0) { cout << "Has item0" << endl; }
	else { cout << "Not have item0" << endl; }

	// obtain item 2,3
	items_flag |= (opt2 | opt3);
	cout << bitset<8>(opt2 | opt3) << endl;
	cout << "Item2,3 obtained " << bitset<8>(items_flag) << endl;

	// 2�� ������ �ְ�, 1�� ������ ���� ���� ���
	if ((items_flag & opt2) && !(items_flag & opt1))
	{
		// ���¸� ����
		items_flag ^= opt2;
		items_flag ^= opt1;
		// �Ѳ����� ó��~ items_flag ^= (opt2 | opt1);
	}

	cout << bitset<8>(items_flag) << endl;

	return 0;
}