#include <iostream>
//#include <cstdint>
// iostream에서 cstdint를 include 하고 있기 때문에
// iostream을 include 하고 있다면 별도로 하지 않아도 된다.

int main()
{
	using namespace std;

	std::int16_t i(5);	// 16비트(2바이트) 데이터 타입
	std::int8_t myint = 65;	// char, 캐릭터형

	cout << myint << endl;

	std::int_fast8_t fi(5);		// 8비트 중 가장 빠른(fast) 데이터 타입
	std::int_least64_t fl(5);	// 적어도 64비트를 갖는 데이터 타입

	return 0;
}