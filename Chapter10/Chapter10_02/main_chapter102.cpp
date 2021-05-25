#include "Monster.h"

using namespace std;

int main()
{
	Monster mon1("Sanson", Position2D(0, 0));
	//mon1.m_location;
	cout << mon1 << endl;

	Monster mon2("Parsival", Position2D(0, 0));
	//mon2.m_location;
	// m_location은 mon1의 이름("Sanson")에 대해 알 필요가 없음
	// m_location은 m_location의 기능만 하면 됨


	//while (1)	// gama loop
	{
		// event
		//mon1.moveTo(1, 1);
		mon1.moveTo(Position2D(1,1));
		cout << mon1 << endl;
	}

	return 0;
}