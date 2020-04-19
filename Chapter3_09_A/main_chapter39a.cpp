#include <iostream>
#include <bitset>
/*
��縦 ���� ��
����� ���ƿ並 Ŭ������ ��
����� ���ƿ並 �ٽ� Ŭ������ ��
�� ��縸 ������ ��
*/
int main()
{
	using namespace std;

	unsigned char option_viewed	 = 0x01;
	unsigned char option_edited	 = 0x02;
	unsigned char option_liked	 = 0x04;
	unsigned char option_shared	 = 0x08;
	unsigned char option_deleted = 0x80;

	unsigned char my_article_flags = 0;
	cout << std::bitset<8>(my_article_flags) << endl;

	// code here

	// ��縦 ���� ��
	my_article_flags |= option_viewed;
	cout << "��� ����: \t" << std::bitset<8>(my_article_flags) << endl;

	// ����� ���ƿ並 Ŭ������ ��
	my_article_flags |= option_liked;
	cout << "���ƿ� Ŭ��: \t" << std::bitset<8>(my_article_flags) << endl;

	// ���ƿ䰡 �̹� �Ǿ� �ִٸ�
	if (my_article_flags & option_liked)
	{
		my_article_flags ^= option_liked;
		cout << "���ƿ� ����: \t" << std::bitset<8>(my_article_flags) << endl;
	}
	else
	{
		my_article_flags |= option_liked;
		cout << "���ƿ� Ŭ��: \t" << std::bitset<8>(my_article_flags) << endl;
	}

	// �� ��縸 ����
	if (my_article_flags & option_viewed)
	{
		my_article_flags |= option_deleted;
		cout << "�� ��� ����: \t" << std::bitset<8>(my_article_flags) << endl;
	}


	return 0;
}