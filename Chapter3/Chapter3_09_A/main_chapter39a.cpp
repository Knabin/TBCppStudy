#include <iostream>
#include <bitset>
/*
기사를 봤을 때
기사의 좋아요를 클릭했을 때
기사의 좋아요를 다시 클릭했을 때
본 기사만 삭제할 때
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

	// 기사를 봤을 때
	my_article_flags |= option_viewed;
	cout << "기사 보기: \t" << std::bitset<8>(my_article_flags) << endl;

	// 기사의 좋아요를 클릭했을 때
	my_article_flags |= option_liked;
	cout << "좋아요 클릭: \t" << std::bitset<8>(my_article_flags) << endl;

	// 좋아요가 이미 되어 있다면
	if (my_article_flags & option_liked)
	{
		my_article_flags ^= option_liked;
		cout << "좋아요 해제: \t" << std::bitset<8>(my_article_flags) << endl;
	}
	else
	{
		my_article_flags |= option_liked;
		cout << "좋아요 클릭: \t" << std::bitset<8>(my_article_flags) << endl;
	}

	// 본 기사만 삭제
	if (my_article_flags & option_viewed)
	{
		my_article_flags |= option_deleted;
		cout << "본 기사 삭제: \t" << std::bitset<8>(my_article_flags) << endl;
	}


	return 0;
}