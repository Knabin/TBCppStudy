#include <iostream>
#include <vector>
#include <cstdint>

int main()
{
	using namespace std;
	typedef double distance_t;

	std::int8_t i(97);	// 고정너비 정수에서도 상황에 적합한 이름을 만들어 준 것임

	// 컴파일러 입장에서는 같음, 프로그래밍 편의를 위함
	double		my_distance;
	distance_t	home2work;
	distance_t	home2school;
	
	// 복잡한 자료형이 존재할 수 있음
	vector<pair<string, int> > pairlist1;
	vector<pair<string, int> > pairlist2;

	typedef vector<pair<string, int> > pairlist_t;
	pairlist_t pairlist3;

	using pairlist_t2 = vector<pair<string, int> >;
	pairlist_t2 pairlist4;

	return 0;
}