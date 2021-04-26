/*
	This is my program.
	Written by me.
*/
#include <iostream>

int main(void)
{
	int x = 2;
	// x = 5; 주석 처리(//)하면 컴파일러가 무시함
	int y = x + 3;

	/*
	영역 주석 multi-line comment
	영역 주석 안에 영역 주석을 넣지 말기 (오류 발생)
	주석 단축키 : Ctrl + K,C

	생성 단계에서 뭘 할 것인지
	구현 단계에서 어떻게 구현했는지(복잡한 경우, 더욱 중요)
	*/

	// 1. ....
	// 2. ....
	std::cout << y << std::endl;
	std::cout << 1 + 2 << std::endl;

	int sight = 10;

	// ..

	// 마법의 물약을 먹어서 시야 거리가 0
	sight = 0;

	// 1 + 1 event
	// int cost = num_items / 2 * price_per_item;

	return 0;
}