#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	const unsigned int red_mask = 0xff0000;
	const unsigned int green_mask = 0x00ff00;
	const unsigned int blue_mask = 0x0000ff;

	cout << std::bitset<32>(red_mask) << endl;
	cout << std::bitset<32>(green_mask) << endl;
	cout << std::bitset<32>(blue_mask) << endl;

	// glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	// 수많은 옵션을 파라미터로 전부 넣기는 힘들다...
	// 비트 연산자를 사용하면 간편함

	unsigned int pixel_color = 0xDAA520;

	cout << std::bitset<32>(pixel_color) << endl;

	unsigned char red = (pixel_color & red_mask) >> 16;
	unsigned char green = (pixel_color & green_mask) >> 8;
	unsigned char blue = pixel_color & blue_mask;

	cout << "red " << std::bitset<8>(red) << " " << int(red) << endl;
	cout << "green " << std::bitset<8>(green) << " " << int(green) << endl;
	cout << "blue " << std::bitset<8>(blue) << " " << int(blue) << endl;

	return 0;
}